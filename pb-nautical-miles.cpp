/*Write a program to receive values of latitude and longitude(in degrees) of two places on the earth and 
outputs the distance between then in nautical miles.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float L1,L2,G1,G2,D,i;
	printf("Enter the value of L1 : ");
	scanf("%f",&L1);
	printf("\n");
	printf("Enter the value of L2 : ");
	scanf("%f",&L2);
	printf("\n");
	printf("Enter the value of G1 : ");
	scanf("%f",&G1);
	printf("\n");
	printf("Enter the value of G2 : ");
	scanf("%f",&G2);
	printf("\n");
	i = sin(L1)*sin(L2) + cos(L1)*cos(L2) * cos(G2 - G1);
	D = 3963*acos(i);
	printf("Distance : %f",D);		
}


