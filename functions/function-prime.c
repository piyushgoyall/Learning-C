#include<stdio.h>
int prime(int num)
{
	int flag=1;
	for(int i=2; i<num;i++) 
    {
	    if(num%i == 0)
	    {    	
	        flag = 0;
	        break;
	    }
    }
    if(flag==1)
    {
    	printf("%d is a Prime Number",num);
	}
	else
	{
		printf("%d is not a Prime Number",num);
	}
}
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	prime(num);
}
