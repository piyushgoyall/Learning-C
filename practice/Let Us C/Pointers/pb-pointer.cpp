/*Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. 
Call this function from main( ) and print the results in main( ).  */
#include<stdio.h>
#include<math.h>
int stats(int *sum, int *avg, double *stdev)
{
	int n1,n2,n3,n4,n5; 
	printf("Enter 5 numbers : \n");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	printf("\n");
	*sum=n1+n2+n3+n4+n5;
	*avg=*sum/5;
	*stdev=sqrt(( pow((n1-*avg),2.0) + pow((n2-*avg),2.0) + pow((n3-*avg),2.0) + pow((n4-*avg),2.0) + pow((n5-*avg),2.0))/4);	
}
int main()
{
	int sum,avg;
	double stdev;
	stats(&sum,&avg,&stdev);
	printf("Sum = %d\n\nAverage = %d\n\nStandard deviation = %lf\n",sum,avg,stdev);
}
