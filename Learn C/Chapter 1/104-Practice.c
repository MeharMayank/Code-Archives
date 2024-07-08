#include<stdio.h>
//SIMPLE INTEREST CALCULATOR//
int main(){
    int principal, rate, time;
    printf("Enter the principal amount \n");
    scanf("%d", &principal);

    printf("Enter the rate \n");
    scanf("%d", &rate);

    printf("Enter the time \n");
    scanf("%d", &time);
    
    int simpleInterest = (principal*rate*time)/100;
    printf("The value of simple interest is %d", simpleInterest);
    return 0;
}
