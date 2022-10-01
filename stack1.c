//stack implementation using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5


      int s[MAXSIZE];
      int top;
      int item;
/*Function to add an element to stack */
void push(){
      if(top==(MAXSIZE-1)){
            printf("STACK OVERFLOW\n");
             }
             else{
                   printf("enter the elemnet\n");
                   scanf("%d",&item);
                   top++;
                   s[top]=item;
             }
}
// void push ()
// {
//       int num;
//       if (top == (MAXSIZE - 1))
//       {
//             printf ("Stack is Full\n");
//             return;
//       }
//       else
//       {
//             printf ("\nEnter element to be pushed : ");
//             scanf ("%d", &num);
//             top = top + 1;
//             s[top] = num;
//       }
//       return;
// }
/*Function to delete an element from stack */
int pop (){
      if (top==-1){
            printf("STACK UNDERFLOW\n");
      }
      else{
            printf("%d",s[top]);
            top--;
      }
}
// int pop ()
// {
//       int num;
//       if (top == - 1)
//       {
//             printf ("Stack is Empty\n");
//             return (top);
//       }
//       else
//       {
//             num = s[top];
//             printf ("poped element is = %d\n", s[top]);
//             top = top - 1;
//       }
//       return(num);
// }
/*Function to display the status of stack */
void display ()
{
      int i;
      if (top == -1)
      {
            printf ("Stack is empty\n");
            // return;
      }
      else

      {
            printf ("\nStatus of elements in stack : \n");
            for (i = top; i >= 0; i--)
            {
                  printf ("%d\n", s[i]);
            }
      }  
}
int main ()
{
      int ch;
      top = -1;

      
      //printf("----------------------------\n");
      while(1)
      {
            printf ("\tSTACK OPERATIONS\n");
      printf("----------------------------\n");
      printf("      1. PUSH\n");
      printf("      2. POP\n");
      printf("      3. DISPLAY\n");
      printf("      4. EXIT\n");
            printf("\nChoose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1:
                        push();
                  break;
                  case 2:
                        pop();
                  break;
                  case 3:
                        display();
                  break;
                  case 4:

                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}
// linked implementation of stack*********************************************to be solved
// #include<stdio.h>
// #include<stdlib.h>

// struct stack {
//       struct stack *next;
//       int item;//element
//       }*top;

// void push ()
// {
//       int num;
//       struct stack *ptr;
//       ptr = (struct stack *)malloc(sizeof(struct stack));
//       printf("enter the element\n");
//       scanf("%d",&num);
//       ptr->item=num;
//       ptr->next= top;
//       top=ptr;
//       return;
// }

// int pop ()
// {
//       // int num;
//       if (top == NULL)
//       {
//             printf ("Stack is Empty\n");
          
//       }
//       else
//       {
//        int temp= top->item;
//        top=top->next;
//       //  return(temp);
//        printf("%d popped\n",temp);
//       }
// }

// void display ()
// {
//       struct stack *ptr1=NULL;
//       ptr1=top;
//       printf("elements are\n");
//       while(ptr1!=NULL){
//             printf("%d",ptr1->item);
//             ptr1=ptr1->next;
//       }
// }
// int main ()
// {
//       int ch;
//       // top = -1;

//       printf ("\tSTACK OPERATIONS\n");
//       printf("----------------------------\n");
//       printf("      1. PUSH\n");
//       printf("      2. POP\n");
//       printf("      3. DISPLAY\n");
//       printf("      4. EXIT\n");
//       //printf("----------------------------\n");
//       while(1)
//       {
//             printf("\nChoose operation : ");
//             scanf("%d", &ch);
//             switch (ch)
//             {
//                   case 1:
//                         push();
//                   break;
//                   case 2:
//                         pop();
//                   break;
//                   case 3:
//                         display();
//                   break;
//                   case 4:
//                         exit(0);
//                   default:
//                         printf("Invalid operation \n");
//             }
//       }
//       return 0;
// }
 