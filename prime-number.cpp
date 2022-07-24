//wap to enter any number and check if it is a prime number
#include<stdio.h>
int main()
{
	int number,i;
	printf("enter the number ");
	scanf("%d",&number);
	for(int i=2; i<=number;i++)
    {
	  if(number%i == 1)
	  {    	
	    printf("the number is a prime number");
        break;
	  }
      if(number%i == 0)
      {
	    printf("the number is not a prime number");
	  }
    }
	
}
