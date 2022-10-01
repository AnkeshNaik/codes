#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 50
#define LENGTH 50


void push(char item,int *top,char s[])
{
    if(*top==SIZE-1)
    {
        printf("stack is full");
        return;
    }
    else
    {
        s[++(*top)]=item;
    }
}
char pop(int *top,char s[])
{
    char item_del;
    if(*top==-1)
    {
        printf("stack is empty");
        return 0;
    }
    else
    {
        item_del=s[*top];
        (*top)--;
        return item_del;
     }
}
int priority(char symbol)
{
    switch (symbol)
    {
        case '#' : return 0;
        case '(' : return 1;
        case '+' :
        case '-' : return 2;
        case '*' :
        case '/' : return 3;
        case '$' :
        case '^' : return 4; 
    }
}
void infixtopostfix(char infix[] ,char postfix[])
{
    int i=0;
    int j=0;
    char symbol,s[LENGTH];
   
     int top =-1;
     push('#',&top,s);
    while((symbol=infix[i++])!='\0')
    {
        if(symbol=='(')
            push(symbol,&top,s);
        else if(isalnum(symbol))
            postfix[j++]=symbol;
        else if(symbol==')')
        {
            while(s[top]!='(')
            postfix[j++]=pop(&top,s);
            pop(&top,s);
        }
        else
        {
            while(priority(s[top])>=priority(symbol))
            postfix[j++]=pop(&top,s);

            push(symbol,&top,s);//vvverryy  imp
        }

    }
    
        while(s[top]!='#')
        {
            postfix[j++]=pop(&top,s);
        }
        postfix[j++]='\0';
    


}
void main()
{
    char infix[LENGTH];
    char postfix[LENGTH];
    printf("enter a infix expression\n");
    scanf("%s",infix);
    infixtopostfix(infix,postfix);
    printf("given infixexpression is %s",infix);
    printf("given postfixexpression is %s",postfix);
}