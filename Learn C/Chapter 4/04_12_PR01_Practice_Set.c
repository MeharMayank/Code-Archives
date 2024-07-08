#include<stdio.h>

int main(){
    printf("*****Multiplication table of 10*****\n");
    for(int i=0; i<10; i++){
        printf("10 X %d = %d\n", i+1, 10*(i+1));
    }
    return 0;
}
