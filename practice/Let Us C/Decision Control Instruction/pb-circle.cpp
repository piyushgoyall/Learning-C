/*Given the coordinates (x, y) of a center of a circle and it’s radius, write a program which will determine whether 
a point lies inside the circle, on the circle or outside the circle.*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,rad,x1,y1,X,Y,dist,rad1;
	printf("Enter the centre of the circle : ");
	scanf("%d %d",&x,&y);
	printf("\n");
	printf("Enter the radius of the circle : ");
	scanf("%d",&rad);
	printf("\n");
	printf("Enter the point : ");
	scanf("%d %d",&x1,&y1);
	printf("\n");
	X=x-x1;
	Y=y-y1;
	dist = pow(X,2) + pow(Y,2);
	printf("Distance from centre to point = %d",dist);
	printf("\n");
	printf("\n");
	rad1 = pow(rad,2);
	printf("Radius sq. = %d",rad1);
	printf("\n");
	printf("\n");
	if(dist>rad1)
	{
		printf("Point lies outside the circle");
	}
	if(dist==rad1)
	{
		printf("Point lies on the circle");
	}
	if(dist<rad1)
	{
		printf("Point lies inside the circle");
	}
}
