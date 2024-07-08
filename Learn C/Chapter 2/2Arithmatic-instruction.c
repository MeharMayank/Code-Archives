#include<stdio.h>
#include<math.h>

int main(){
    int a = 4;
    int b= 9;
    printf("The value of a + b is %d\n", a +b);
    printf("The value of a - b is %d\n", a -b);
    printf("The value of a * b is %d\n", a *b);
    printf("The value of a / b is %f\n", a /b);
    
    int z;
    z = b * a; // legal
    //b * a = z; // Illegal
    printf("The value of z is: %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

    //No operator is assumed to be present
    //printf("The value of 4 * 5 is %d\n", (4)(5) OR 4.5) --> Will not return 20
    printf("The value of 4 * 5 is %d\n", 4*5); //Correct way to multiply or use any operator
    printf("The value of 4 to the power 5 is %f\n", pow(2,5));
    
    return 0;
}
