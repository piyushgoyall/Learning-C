//wap to enter any number and check if it is a prime number
#include<stdio.h>
int main()
{
	int number,i,flag=1;
	printf("Enter the number ");
	scanf("%d",&number);
	printf("\n");
	for(int i=2; i<number;i++) 
    	{
	    if(number%i == 0)
	    {    	
	        flag = 0;
	        break;
	    }
	  
    	}
    	if(flag==1)
    	{
    		printf("%d is a Prime Number",number);
	}
	else
	{
		printf("%d is not a Prime Number",number);
	}
}
