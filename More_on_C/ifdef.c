#include <stdio.h>
#define hello 100
int main()
{
#ifdef hello
    {
        printf("Hello is defined");
    }
#else
    {
        printf("Hello is not defined");
    }
#endif
    return 0;
}
