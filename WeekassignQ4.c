#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B;
    int Ope;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your Choice Of Operation : ");
    scanf("%d",&Ope);
    printf("Enter the values of A & B: ");
    scanf("%d %d",&A,&B);
    switch(Ope)
    {
    case 1	:
        printf("The Sum of %d and %d is : %d",A,B,A+B);
        break;
    case 2	:
        printf("The Difference of %d and %d is : %d",A,B,A-B);
        break;
    case 3	:
        printf("The Multiplication of %d and %d is : %d",A,B,A*B);
        break;
    case 4	:
        printf("The Division of Two Numbers is %d : ",A/B);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}