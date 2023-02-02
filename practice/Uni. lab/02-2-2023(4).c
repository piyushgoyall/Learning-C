// break and continue statement

#include<stdio.h>
int  main()
{
    int n,n1;
    printf("Enter ending value : ");
    scanf("%d",&n);
    printf("Enter value to be skipped : ");
    scanf("%d",&n1);
    for(int i=1;i<=n;i++)
    {
        if(i==n1)
        {
            continue;
        }
        else
        {
            printf("%d  ",i);
        }
    }
    return 0;
}

// #include<stdio.h>
// int  main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         if(i==5)
//         {
//             break;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }