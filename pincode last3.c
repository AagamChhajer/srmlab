#include <stdio.h>


int main(){
    long int  pincode;
    printf("Enter your pincode \n");
    scanf("%ld",&pincode);
    int last3;
    last3 = pincode % 1000;
    printf("%d \n",last3);

    return 0;
}