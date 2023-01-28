#include<stdio.h>
int main() 
{
  float f;
  printf("Enter a float number : ");
  scanf("%f",&f);
  printf("\n");
  for(;f>0;f-=0.1)
     printf("%f\n",f);
  return 0;
}
