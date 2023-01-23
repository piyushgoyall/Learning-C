#include<stdio.h>
int main()
{
    int x=100;
    int y =200;
    switch (x)
    {
        case 100:
            printf("First switch\n");
            switch (y)
            {
                case 200:
                    printf("Inner switch\n");
            }
    }
    printf("Value of x is : %d",x);
    printf("\nValue of y is : %d",y);
}

