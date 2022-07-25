#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    	       	printf("*\t");
	}
	printf("\n");
    }
    printf("\n");
    for(i=0;i<=4;i++)
    {
         for(j=0;j<=4-i;j++)
	 {
		printf("*\t");
	 }
		printf("\n");
     }
     for(i=0;i<=4;i++)
     {
	 for(j=0;j<=4;j++)
	 {
		if(j>=4-i)
		{
			printf("*\t");
		}
		else
		printf(" \t");
	  }
          printf("\n");
	  }
	    
          printf("\n");
	    
	  for(i=0;i<=4;i++)
	  {
	      for(j=0;j<=4;j++)
	      {
	    	   if(j>=i)
	    	   {
	        	 printf("*\t");
		   }
		   else
		   {
			 printf(" \t");
		   }
	      }
	printf("\n");
	  }
}
