#include<stdio.h>
int main()
{
	char c;
	printf("enter the character : ");
	scanf("%c",&c);
	printf("\n");
	switch(c)
	{
		case'A':
		case'E':
	    	case'I':
	    	case'O':
	    	case'U':	
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			printf("Entered character is a vowel");
			break;
		default:
			printf("Entered character is a consonant");	
	}		
}
