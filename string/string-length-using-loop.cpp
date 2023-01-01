#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;

    printf("Enter a string: ");
    scanf("%s",str);
	printf("\n");
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    printf("Length of input string: %d",length);
}
