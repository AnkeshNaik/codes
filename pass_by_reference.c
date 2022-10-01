// // WITH ARGUMENTS BUT WITHOUT RETURN VALUE
// #include<stdio.h>
// int add(int *,int *);//DECLARATION
// void main(){
//     int a=5,b=6 ;
//     add(&a,&b);//CALL
// }
// int add(int *a,int *b){//DEFINATION
//     int sum;
//     sum = *a + *b ;
//     printf("sum of a and b is %d ",sum);
// }

// //  WITH ARGUMENTS AND WITH RETURN VALUE
// #include<stdio.h>
// int add(int *,int *);//DECLARATION
// int a=5;
// void main(){
//     int sum1,b=6 ;
//     sum1=add(&a,&b);//CALL
// }
// int add(int *a,int *b){//DEFINATION
//     int sum;
//     sum = *a + *b;
//     printf("sum of a and b is %d ",sum);
//     return sum;
// }