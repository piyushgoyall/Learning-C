#include <stdio.h>
#define hello 100
int main()
{
#ifdef hello
    {
        printf("Hello is not defined yet. But we will define it now.\n");
#define hi 300
    }
#else
    {
        printf("Hello is already defined\n");
    }
#endif
    return 0;
}
