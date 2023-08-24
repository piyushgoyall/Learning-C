// File Handling

// r matlab read mode mai just btaega ki file exist karti hai ki nahi
// w likhne par file na ho to ban jaati hai forcefully

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sharma.txt", "r");
    if (ptr != NULL)
    {
        printf("File opened successfully");
    }
    else
    {
        printf("File not found");
    }
    printf("\n");
    char a[50];
    printf("Enter a string: ");
    scanf("%s", &a);
    for (int i = 0; i < strlen(a); i++)
    {
        fputc(a[i], ptr);
    }
    fclose(ptr);
    return 0;
}
