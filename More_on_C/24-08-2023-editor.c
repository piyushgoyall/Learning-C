// EDITOR

#include <stdio.h>
#include <string.h>

int main()
{
    char filename[100];
    FILE *ptr;
    char ch;

    printf("1. Create a new file\n");
    printf("2. Open an existing file\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the filename: ");
        scanf("%s", filename);
        ptr = fopen(filename, "w");
        if (ptr == NULL)
        {
            printf("Unable to create the file.\n");
            return 1;
        }
    }
    else if (choice == 2)
    {
        printf("Enter the filename to open: ");
        scanf("%s", filename);
        ptr = fopen(filename, "r");
        if (ptr == NULL)
        {
            printf("File not found.\n");
            return 1;
        }
        printf("File contents:\n");
        while ((ch = fgetc(ptr)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(ptr);
        return 0;
    }
    else
    {
        printf("Invalid choice.\n");
        return 1;
    }
    printf("Enter text (Ctrl+D to save and exit):\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, ptr);
    }
    fclose(ptr);
    printf("File saved.\n");

    return 0;
}

// int pick;
// printf("1)Create a file\n");
// printf("Open a file\n");
// printf("Enter your choice: ");
// scanf("%d",pick);
// if(pick==1)
// {
//     printf("Enter file name: ");
//     scanf("%s",fname);
//     ptr = fopen(fname,"w");
// }
// else if(pick ==2)
// {
//     printf("Enter file name to create: ");
//     scanf("%s",fname);
//     ptr = fopen(fname,"r");
// }