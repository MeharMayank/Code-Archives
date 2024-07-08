#include<stdio.h>

int main(){
    //97 - 122 = a-z
    char ch;
    printf("Enter the character...\n");
    scanf("%c",&ch);
    //%c is used for character input 
    //like %d and %f are used for integer and float input
    if(ch<=122 && ch>=97){
        printf("It is lowercase...\n");
    }
    else{
        printf("It is uppercase...\n");
    }

    return 0;
}
