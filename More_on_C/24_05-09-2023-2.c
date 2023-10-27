// Write a program to check if binary representation of a number is palindrome.

#include <stdio.h>
#include<string.h>
#include <stdbool.h>

// Function to check if a binary string is a palindrome
bool isBinaryPalindrome(char *binaryStr, int length)
{
    int i, j;

    // Compare the string forwards and backwards
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (binaryStr[i] != binaryStr[j])
        {
            return false;
        }
    }

    return true;
}

// Function to convert a decimal number to binary
void decimalToBinary(int decimal, char *binaryStr)
{
    int i = 0;

    while (decimal > 0)
    {
        binaryStr[i] = (decimal % 2) + '0';
        decimal /= 2;
        i++;
    }

    binaryStr[i] = '\0';

    // Reverse the binary string
    int length = i;
    for (int j = 0; j < length / 2; j++)
    {
        char temp = binaryStr[j];
        binaryStr[j] = binaryStr[length - j - 1];
        binaryStr[length - j - 1] = temp;
    }
}

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    char binaryStr[32]; // Assuming a maximum of 32-bit binary representation
    decimalToBinary(decimal, binaryStr);

    if (isBinaryPalindrome(binaryStr, strlen(binaryStr)))
    {
        printf("Binary representation is a palindrome.\n");
    }
    else
    {
        printf("Binary representation is not a palindrome.\n");
    }

    return 0;
}
