#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of d");
	scanf("%d",&d);
	printf("enter the value of e");
	scanf("%d",&e);
	f=a+b+c+d+e;
	g=f/5;
	h=(f*100)/500;
	printf("%d\n%d\n%d",f,g,h);
}
