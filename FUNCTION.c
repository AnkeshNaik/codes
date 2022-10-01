// //NO ARGUMENTS AND NO RETURN VALUE
// #include<stdio.h>
// int add();//DECLARATION
// void main(){
//     add();//CALL
// }   
// int add(){
//     int sum,a=5,b=6;
//     sum = a+b;
//     printf("sum of a and b is %d ",sum);
   
// }
// // NO ARGUMENTS BUT WITH RETURN VALUE
// #include<stdio.h>
// int add();//DECLARATION
// void main(){
//     int sum1;
//     sum1=add();//CALL
// }
// int add(){//DEFINATION
//     int sum,a=5,b=6;
//     sum = a+b;
//     printf("sum of a and b is %d ",sum);
//     return sum;

// }
//  WITH ARGUMENTS BUT WITHOUT RETURN VALUE
// #include<stdio.h>
// int add(int ,int );//DECLARATION
// void main(){
//     int a=5,b=6 ;
//     add(a,b);//CALL
// }
// int add(int a,int b){//DEFINATION
//     int sum;
//     sum = a+b;
//     printf("sum of a and b is %d ",sum);
    // }

//  
// WITH ARGUMENTS AND WITH RETURN VALUE
#include<stdio.h>
int add(int ,int );//DECLARATION
void main(){
    int sum1,a=5,b=6 ;
    sum1=add(a,b);//CALL
}
int add(int a,int b){//DEFINATION
    int sum;
    sum = a+b;
    printf("sum of a and b is %d ",sum);
    return sum;
}