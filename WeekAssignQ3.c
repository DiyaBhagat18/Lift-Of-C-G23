#include<stdio.h>
int main()
{ 
int A, sum=0 , r;
printf("Enter The Number");
scanf("%d",&A);
while(A)
{
r=A%10;
A=A/10;
sum=sum+r;
}
printf("\n The Sum Of The Digits are:%d",sum);
return 0;

}