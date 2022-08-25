/*In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an interger scale from 0 to 255.
In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. 
Write a program that converts RGB color to CMYK color as per the following formulae: 
Note that of the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/
#include<stdio.h>
int main()
{
	float r,g,b,red,green,blue,max,white,cyan,magenta,yellow,black;
	printf("Enter the vlaue for Red, Green and Blue :  ");
	scanf("%f%f%f",&r,&g,&b);
	printf("\n");
	if(red==0 && green==0 && blue==0)
	{
		cyan=0.00;
		magenta=0.00;
		yellow=0.00;
		black=1;
	}
	else
	{
		red=r/255;
		green=g/255;
		blue=b/255;
		max=red;
		if(green>max)
		{
			max=green;
		}
		if(blue>max)
		{
			max=blue;
		}
		white=max;
		cyan=(white-red)/white;
		magenta=(white-green)/white;
		yellow=(white-blue)/white;
		black=1-white;
	}
	printf("C=%.3f\nM=%.3f\nY=%.3f\nK=%.3f",cyan,magenta,yellow,black);
}
