#include <stdio.h>
void main()
{

    int arr[1], n, i, key, flag = 0;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the numbers\n");

    for (i = 0; i < n; i++)

        scanf("%d", &arr[i]);

    // for (i = 0; i < n; i++)
    // {
    //    printf("address of elements is %d\n",&arr[i]);

    // }
    printf("enter the key element\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)

        if (key == arr[i])
        {
            flag = 1;
            break;
        }

    if (flag == 1)
        printf("key element %d found at %d\n", key, i + 1);
    else
        printf("key element not found");
}
//    #include<stdio.h>
// void main ()
// {
//     int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};
//     int item, i,flag;
//     printf("\nEnter Item which is to be searched\n");
//     scanf("%d",&item);
//     for (i = 0; i< 10; i++)
//     {
//         if(a[i] == item)
//         {
//             flag = i+1;
//             break;
//         }
//         else
//         flag = 0;
//     }
//     if(flag != 0)
//     {
//         printf("\nItem found at location %d\n",flag);
//     }
//     else
//     {
//         printf("\nItem not found\n");
//     }
// }
