#include <stdio.h>
void main()
{
    int a, b, result;
    char ch;

   
    printf("enter the numbers\n");
    scanf("%d%d", &a, &b);
     printf("enter the character\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        result = a + b;
        printf("result+%d", result);
        break;

    case '-':
        result = a - b;

        break;

    case '*':
        result = a * b;

        break;

    case '/':
    {
        if (b != 0)
            result = a / b;
        else
            printf("denominatror is zero .... invalid");
    }
    break;
    default:
        printf("enter a valid choice \n");
        break;
    }
    printf("result last is %d", result);
}
/* important ponits while using switch : 
   first define the character then other  variables;
   second use switch(ch);
   third case , break ,default ,break;
   braek must be used properly;
   thank you */