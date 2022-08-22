/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
Write a program to calculate and print paper sizes A0, A1, A2, ….. A8.*/
#include<stdio.h>
int main()
{
	int l0,w0;
	int l1,w1,l2,w2,l3,w3,l4,w4,l5,w5,l6,w6,l7,w7,l8,w8;
	l0 = 1189;
	w0 = 841;
	printf("Size of A0 paper : Length= %d mm __ Width= %d mm",l0,w0);
	l1 = w0;
	w1 = l0/2;
	printf("\n");
	printf("\n");
	printf("Size of A1 paper : Length= %d mm __ Width= %d mm",l1,w1);
	l2 = w1;
	w2 = l1/2;
	printf("\n");
	printf("\n");
	printf("Size of A2 paper : Length= %d mm __ Width= %d mm",l2,w2);
	l3 = w2;
	w3 = l2/2;
	printf("\n");
	printf("\n");
	printf("Size of A3 paper : Length= %d mm __ Width= %d mm",l3,w3);
	l4 = w3;
	w4 = l3/2;
	printf("\n");
	printf("\n");
	printf("Size of A4 paper : Length= %d mm __ Width= %d mm",l4,w4);
	l5 = w4;
	w5 = l4/2;
	printf("\n");
	printf("\n");
	printf("Size of A5 paper : Length= %d mm __ Width= %d mm",l5,w5);
	l6 = w5;
	w6 = l5/2;
	printf("\n");
	printf("\n");
	printf("Size of A6 paper : Length= %d mm __ Width= %d mm",l6,w6);
	l7 = w6;
	w7 = l6/2;
	printf("\n");
	printf("\n");
	printf("Size of A7 paper : Length= %d mm __ Width= %d mm",l7,w7);
	l8 = w7;
	w8 = l7/2;
	printf("\n");
	printf("\n");
	printf("Size of A8 paper : Length= %d mm __ Width= %d mm",l8,w8);
}
