#include<stdio.h>
#include<math.h>

int main(){
    float dividend,divisor;
    int quotient,remainder;

    printf("Enter the number to divide\n");
    scanf("%f",&dividend);
printf("Enter the divisor\n\n");
    scanf("%f",&divisor);
    quotient = dividend / divisor;
    printf ("%d is the quotient \n\n",quotient);
    remainder = dividend - divisor*quotient;
    printf("%d is the remainder",remainder);
    }