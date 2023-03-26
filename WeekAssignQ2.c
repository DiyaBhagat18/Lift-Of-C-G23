#include<stdio.h>
 int main ()
{
    int A;
    printf("Enter a Number A");
    scanf("%d",&A);
    if( A>0)
    {
        printf("The Number is a Positive Number");
    }
    else if( A<0) 
    {
        printf("The Number is a Negative Number");
    }
    else if ( A==0)
    {
        printf("The Number is Zero");
    }    
    return 0;
    }    
    
    
 