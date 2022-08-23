// Write a program to receive Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates(r,phi).
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,p,q,r,phi;
	printf("Enter the x-coordinate : ");
	scanf("%f",&x);
	printf("\n");
	printf("Enter the y-coordinate : ");
	scanf("%f",&y);
	printf("\n");
	p = pow(x,2);
	q = pow(y,2);
	r = sqrt(p+q);
	printf("%.2f",r);
	printf("\n");
	phi = y/x;
	printf("%.2f",phi);
	printf("\n");
	printf("\n");
	printf("Polar co-ordinates for (%.2f,%.2f) : (%.2f,tan inverse(%.2f))",x,y,r,phi);	
}
