/*Write a program which to find the grace marks for a student using switch. The user should enter the class obtained by the
  student and the number of subjects he has failed in.
- If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace.
  If the number of subjects he failed in is less than or equal to 3 then the grace is of 5 marks per subject.
- If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any
  grace. If the number of subjects he failed in is less than or equal to 2 then the grace is of 4 marks per subject.
- If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any
  grace. If the number of subjects he failed in is equal to 1 then the grace is of 5 marks per subject. */
#include<stdio.h>
int main()
{
	int cl,f,gr;
	printf("Enter class obtained by the student : ");
	scanf("%d",&cl);
	printf("\n");
	printf("Enter the number of subjects the student has failed in : ");
	scanf("%d",&f);
	printf("\n");
	switch(cl)
	{
		case 1:
			if(f<=3)
			{
				gr=5;
			}
			else
			{
				gr=0;
			}
			printf("Grace : %d",gr);
			break;
		case 2:
			if(f<=2)
			{
				gr=4;
			}
			else
			{
				gr=0;
			}
			printf("Grace : %d",gr);
			break;
			case 3:
			if(f<=1)
			{
				gr=5;
			}
			else
			{
				gr=0;
			}
			printf("Grace marks : %d",gr);
			break;
			default:
				printf("Invalid");
	}
}
