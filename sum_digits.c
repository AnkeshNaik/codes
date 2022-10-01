// #include<stdio.h>  
//  int main()    
// {    
// int n,sum=0,m;    
// printf("Enter a number:");    
// scanf("%d",&n);    
// while(n>0)    
// {    
// m=n%10;    
// sum=sum+m;    
// n=n/10;    
// }    
// printf("Sum is=%d",sum);    
// return 0;  
// } 
#include <stdio.h>
int main() {
    int n, rev = 0, remainder,sum=0,m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n>0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
     printf("Sum is=%d",sum); 
    return 0;
}