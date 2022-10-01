#include <stdio.h>
void main (){
    int i , osum=0,esum =0, n;
    printf("enter the numbers\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            esum = esum +i;
            /* code */
        }
        else
        {
            osum = osum +i;
            /* code */
        }
        
    }
    printf("sum is osum %d and esum %d",osum,esum);
    
}
