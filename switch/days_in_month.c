#include<stdio.h>
int main()
{
	char a;
	printf("enter the value of a ");
	scanf("%c",&a);
	switch(a)
	{
		case'january':
			printf("30");
			break;
		case'februuary':
			printf("28");
			break;
		case'march':
			printf("31");
			break;
		case'april':
			printf("30");
			break;
		case'may':
			printf("31");
			break;
		case'june':
			printf("30");
			break;
		case'july':
			printf("31");
			break;
		case'august':
			printf("31");
			break;
		case'september':
			printf("30");
			break;
		case'october':
			printf("31");
			break;
		case'november':
			printf("30");
			break;
		case'december':
			printf("31");
			break;
		default:
			printf("invalid");
	}
}
