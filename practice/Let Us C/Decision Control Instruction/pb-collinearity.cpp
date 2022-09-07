/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/ 
#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3,temp;
	float delta;
	printf("Enter x1 and y1 : ");
	scanf("%d %d",&x1,&y1);
	printf("\n");
	printf("Enter x2 and y2 : ");
	scanf("%d %d",&x2,&y2);
	printf("\n");
	printf("Enter x3 and y3 : ");
	scanf("%d %d",&x3,&y3);
	printf("\n");
	temp = (x1*y2 + x2*y3 + x3*y1) - (x1*y3 + x3*y2 + x2*y1);
	delta = 0.5*temp;
	if(delta==0)
	{
		printf("Points lie on the same line");
	}
	else
	{
		printf("Points do not lie on the same line");
	}
	
}
