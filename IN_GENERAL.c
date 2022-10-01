//  //first n natural numbers
//  #include <stdio.h>
//  int main (){
//  int i,num;
//  printf("enter the number\n");
//  scanf("%d",&num);
//  for (i=1;i<=num;i++)

//   printf("%d\t",i);
//  }
//sum of first n natural numbers
//  #include <stdio.h>
//  int main (){
//  int i,sum=0,n;
//  printf("enter the number\n");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++){
//  sum=sum+i;
//  }
//   printf("sum of %d natural numbers is %d\t",n,sum);
//  }
//sum of odd and even nummbers
//  #include <stdio.h>
//  void main (){
//  int i,osum=0,esum=0,n;
//  printf("enter the number\n");
//  scanf("%d",&n);

//  for (i=1;i<=n;i++)
//  {
//  if (i%2==0)
//  {
//   esum =esum +i;
//  }
//  else
//  osum=osum+i;
//  }
//  printf("even sum is %d and odd sum is %d",esum,osum);
//  }
// all factors of  a number
//  #include <stdio.h>
//  void main (){
//  int i,num;
//  printf("enter the number\n");
//  scanf("%d",&num);

//  for (i=1;i<=num;i++)
//  if (num%i==0)

//     printf(" %d\t",i);
// }
// factorial
//  #include <stdio.h>
//  void main (){
//  int i,factorial=1,num;
//  printf("enter the number\n");
//  scanf("%d",&num);

//  for (i=1;i<=num;i++)
//  factorial=factorial*i;
//     printf("factorial is %d\t",factorial);
// }
//gcd and lcm
//  #include <stdio.h>
//  void main (){
//  int p,q,a,b,gcd,lcm,rem;
//  printf("enter the numbers\n");
//  scanf("%d%d",&a,&b);
//  p=a;
//  q=b;
//  rem=a%b;
//  while (b!=0)
//  {
//      rem=a%b;

//     a=b;
//     b=rem;

//  }
//   gcd=a;
//   lcm=(p*q)/gcd;
//   printf("gcd is %d and lcm is %d",gcd,lcm);
//  }
// //reverse of a number
//  #include <stdio.h>
//  void main (){
//  int num,rev=0;
//  printf("enter the numbers\n");
//  scanf("%d",&num);

//  while (num!=0)
//  {

//    rev=rev*10+num%10;
//    num=num/10;

//  }
//   printf("reverse of a number is %d",rev);
//  }
//checking palindrome of a number
//  #include <stdio.h>
//  void main (){
//  int num,rev=0,p;
//  printf("enter the numbers\n");
//  scanf("%d",&num);
//  p=num;
//  while (num!=0)
//  {

//    rev=rev*10+num%10;
//    num=num/10;

//  }
//  if(rev==p)
//   printf("palindrome %d",p);
//   else
//   printf("not a palindrome %d",p);
//  }
//fibonacci of number
// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     int num, a = 0, b = 1, i, fibonacci = 0;
//     printf("enter the number\n");
//     scanf("%d", &num);
//     if (num <= 0)
//     {
//         printf("invalid");
//         exit(0);}
//         printf("fibonacci series is :\t");
//         if(num==1)
//     printf("%d\n",a);
//         else if (num >1){
        
//         printf("%d\t", a);
//         printf("%d\t", b);
//         for (i = 2; i <= num; i++)
//         {
            
//             fibonacci = a + b;
//             printf("%d\t", fibonacci);
//             a = b;
//             b = fibonacci;
            
//         }
//         }
//         printf("exit");
//     }