// INLINE FUNCTION

#include <stdio.h>
static inline void sum(int i, int j)
{
    printf("Sum = %d", i + j);
}
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    sum(i,j);
    return 0;
}