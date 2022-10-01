#include<stdio.h>
#include<math.h>
int step =0;
int num;
void Movetower(int n,char source,char dest,char temp){
    if(n==1){
        step++;
        printf("step %d   disc %d from source %c to destination %c\n",step,n,source,dest);
        return;
    }
    Movetower(n-1,source,temp,dest);// 1 recursion
    step++;
    // if(step==(pow(2,num))/2){
    //     printf("step %d is a special move",step);
    //     printf("move last disc n  %d ffrom source %c to destination %c ",n,source,dest);
    //     printf("it takes %d steps to move n-1 here %d disc from source %c to temp %c",step-1,n-1,source,temp);
    // }
    // else{
    printf("step %d disc %d from source%c to destination %c\n",step,n,source,dest);
    Movetower(n-1,temp,dest,source);
}

int main (){
    int n=0;
    printf("enter no of disks");
    scanf("%d",&num);
    n=num;
    Movetower(n,'A','B','C');
}
