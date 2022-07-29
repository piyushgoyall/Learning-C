//wap to enter any number and check if it is a prime number
#include<stdio.h>
int main()
{
	int number,i,flag=1;
	printf("enter the number ");
	scanf("%d",&number);
	for(int i=2; i<number;i++) 
    	{
	  	if(number%i == 1)
	  	{    	
	   		flag = 1;
	   		break;
	  	}
    	}
    
    	if(flag==0)
    	{
    		printf("This is Prime Number");
	}
	else
	{
		printf("This is Not Prime Number");
	}
}
