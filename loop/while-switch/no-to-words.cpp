//wap to enter any number and print it in words
#include<stdio.h>
int main()
{
	int no,reverse=0,l;
	printf("enter the number ");
	scanf("%d",&no);
	while(no>0)
	{
		l=no%10;
		reverse=(reverse*10)+l;
		no=no/10;
	}
	while(reverse>0)
	{ 
		l=reverse%10;
		switch(l)
		{
			case 0:
				printf("zero\t");
				break;
			case 1:
				printf("one\t");
				break;
			case 2:
				printf("two\t");
				break;
			case 3:
				printf("three\t");
				break;
			case 4:
				printf("four\t");
				break;
			case 5:
				printf("five\t");
				break;
			case 6:
				printf("six\t");
				break;
			case 7:
				printf("seven\t");
				break;
			case 8:
				printf("eight\t");
				break;
			case 9:
				printf("nine\t");
				break;
		}
		reverse = reverse/10;
	}
}

