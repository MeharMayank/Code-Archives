#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//We have to include stdlib.h so that it doesn't give 
//any error or warning while generating random number

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1;// Generates a random
    //number between 1 to 100
    printf("the number is %d", number);

    return 0;
}
