#include<stdio.h>
int main()
{
	char c;
	printf("enter the value of c");
	scanf("%c",&c);
	if(c =='A'|| c =='E'|| c =='I'|| c =='O'|| c =='U')
	{
		printf("upper case vowel");
	}
	else if(c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u')
	{
	printf("lower case vowel"); 
    }
    else
    {
    	printf("%c is a consonant",c);
	}
}
