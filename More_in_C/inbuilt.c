#include <stdio.h>
int main()
{
    printf("Name of file you are working in: %s\n", __FILE__);
    printf("Current date is: %s\n", __DATE__);
    printf("Current time is: %s\n", __TIME__);
    printf("This line number is: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}
