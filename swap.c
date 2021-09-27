#include<stdio.h>  
int main()    
{    
    int a=55, b=45;      
    printf("Before swapping a=%d b=%d",a,b);      
    a=a+b;//a=100 (55+45)    
    b=a-b;//b=55 (100-45)    
    a=a-b;//a=45 (100-55)    
    printf("\nAfter swapping a=%d b=%d",a,b);    
    return 0;  
}   
