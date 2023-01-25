// Write the following programs using switch case statement:
//     a) To check that an input alphabet is vowel or consonant 
//     b) To check whether a number is positive, negative or zero


#include<stdio.h>
int main()
{
    char num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int temp = num>0;
    
    switch(temp)
    {
        case 1:
            printf("Entered number is positive");
            break;
        case 0:
            if(num==0)
            {
                printf("Entered number is zero");
                break;
            }
            else if(num<0)
            {
                printf("Entered number is negative");
                break;
            }
    }
}



// #include<stdio.h>
// int main()
// {
//     char num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     int temp1 = num>0;
//     int temp2 = num<0;
//     switch(temp1)
//     {
//         case 1:
//             printf("Entered number is positive");
//             break;
//         case 0:
//             switch(temp2)
//             {
//                 case 1:
//                     printf("Entered number is negative");
//                      break;
//                 case 0:
//                     printf("Entered number is zero");
//             }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     char in;
//     printf("Enter a character : ");
//     scanf("%c",&in);
//     switch(in)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("Entered character is vowel");
//             break;
//         default:
//             printf("Entered character is a consonent");
//     }
// }

