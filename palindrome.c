#include <stdio.h>
int main (){
    int n,num,rev=0;
    printf("enter the number\n");
    scanf("%d",&num);
    
    n=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(rev==n){
    printf("palindrome\n");
    }
    else if (rev!=n)
    printf("not a palindrome\n");
}