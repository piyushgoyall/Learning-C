#include<stdio.h> 
int main() 
{ 
    // a = 5(00000101), b = 9(00001001) 
    unsigned char a = 5, b = 9;  
  
    // The result is 00001010  
    printf("a<<1 = %d\n", a<<1); 
    
    // The result is 00010010  
    printf("b<<1 = %d\n", b<<1);   
    return 0; 
} 