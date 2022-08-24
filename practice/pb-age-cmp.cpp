/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/
#include<stdio.h>
int main()
{
	int r,s,a,min=0;
	printf("Enter the age of Ram : ");
	scanf("%d",&r);
	printf("\n");
	printf("Enter the age of Shyam : ");
	scanf("%d",&s);
	printf("\n");
	printf("Enter the age of Ajay : ");
	scanf("%d",&a);
	printf("\n");
	if(r>0 && s>0 && a>0)
	{
		if(r>s)
		{
			if(s>a)
			{
				min = a;
			}
			else
			{
				min = s;
			}
		}
		else
		{
			if(r<s)
			{
				if(r<a)
				{
					min = r;
				}
				else 
				{
					min = a;
				}
			}
		}
		printf("Youngest of Ram(%d), Shyam(%d) and Ajay(%d) is : %d",r,s,a,min);
	}
	else
	{
		printf("Invalid age");
	}
}
