/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/ 
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the X co-ordinate : ");
	scanf("%d",&x);
	printf("\n");
	printf("Enter the Y co-ordinate : ");
	scanf("%d",&y);
	printf("\n");
	if(x==0)
	{
		if(y!=0)
		{
			printf("The point (%d,%d) lies on x-axis",x,y);
		}
		else
		{
			printf("The point (%d,%d) lies on origin",x,y);	
		}
	}
	if(y==0)
	{
		if(x!=0)
		{
			printf("The point (%d,%d) lies on y-axis",x,y);
		}
	}
	if(x!=0 && y!=0)
	{
		printf("The point does not lie on origin, x-axis or y-axis");
	}
}
