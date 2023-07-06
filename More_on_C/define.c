#include <stdio.h>
#define height 100
#define number 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\\'
int main()
{
    printf("Height is: %d\n", height);
    printf("Value of pi is: %f\n", number);
    printf("Letter is: %c\n", letter);
    printf("Letter sequence is: %s\n", letter_sequence);
    printf("Backslash: %c\n", backslash_char);

#ifdef number
    {
        printf("Defined");
    }
#else
    {
        printf("Not Defined");
    }
#endif
    return 0;
}
