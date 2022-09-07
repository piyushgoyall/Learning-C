/*Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int base,per,hyp;
	for(base=1;base<=30;base++)
	{
		for(per=1;per<=30;per++)
		{
			for(hyp=1;hyp<=30;hyp++)
			{
				if(pow(base,2)+pow(per,2)==pow(hyp,2))
				{
					if(per>base)
					{
						printf("Base = %d , Perpendicular = %d , Hypotenuse = %d\n",base,per,hyp);
					}
				}
			}
		}
	}
}
