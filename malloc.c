// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n;
//     printf("enter");
//     scanf("%d",&n);
//     int *ptr=(int *)malloc(n*sizeof(int));
//     if (ptr==NULL){
//         printf("exit");
//         exit(0);
//     }
//     printf("hdwj");
//     for(i=0;i<n;i++){
       
//         scanf("%d",ptr+i);
//     }
//     for(i=0;i<n;i++){
//         printf("%d\n",(ptr+i));
//         printf("%d\n",*(ptr+i));
//     }
// return 0;
// }
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;//declaration
    int top;
    int *arr;
};
// int main(){
// struct stack s;
// s.size=80;//accessing the elements
// s.top=-1;
// s.arr=(int *)malloc(s.size * sizeof(int));//dyanamic allocation
// return 0;
// }
int main(){
struct stack *s;
s->size=80;//accessing the elements
s->top=-1;
s->arr=(int *)malloc(s->size * sizeof(int));//dyanamic allocation
return 0;
}
