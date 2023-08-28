// INLINE FUNCTION
// Write a program using inline function to print reverse and in uppercase char ch[15] = "group21"

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include for toupper function

static inline void strr(char ch[])
{
    size_t length = strlen(ch);

    for (size_t i = length; i > 0; i--)
    {
        printf("%c", ch[i - 1]); // Print characters in reverse order
    }
    printf("\n");

    for (size_t i = 0; i < length; i++)
    {
        ch[i] = toupper(ch[i]); // Convert characters to uppercase
    }
    printf("%s\n", ch);
}

int main()
{
    char ch[15] = "group21";
    strr(ch);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// static inline void strr(char ch[])
// {
//     for (int i = strlen(ch) - 1; i >= 0; i--)
//     {
//         printf("%s", ch[i]);
//     }
//     printf("\n%s", strupr(ch));
// }
// int main()
// {
//     char ch[15] = "group21";
//     strr(ch);
//     return 0;
// }

