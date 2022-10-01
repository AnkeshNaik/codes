#include<stdio.h>
void main (){
    int b=10;
    int *a;
    a=&b;
    printf("%d",*a);
}
// #include<stdio.h>
// void main (){
//   int x,y,ptr;
//  x=10;
//   printf("address of x %d \n",&x);
//   printf("address of y %d\n",&y);
//   printf("address of ptr %d\n",&ptr);
// //   ptr=&x;
// //   printf("address of x %d \n",x);
// //   printf("address of y %d\n",y);
// //   printf("address of ptr %d\n",ptr);
//   y=*ptr;
//   printf("address of x %d \n",&x);
//   printf("address of y %d\n",&y);
//   printf("address of ptr %d\n",&ptr);
// //   *ptr=25;
// //   printf("address of x %d \n",&x);
// //   printf("address of y %d\n",&y);
// //   printf("address of ptr %d\n",&ptr);

// }