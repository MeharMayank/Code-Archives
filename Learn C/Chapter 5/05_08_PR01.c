#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int x;
    printf("Enter the first number...\n");
    scanf("%d", &x);

    int y;
    printf("Enter the second number...\n");
    scanf("%d", &y);

    int z;
    printf("Enter the third number...\n");
    scanf("%d", &z);
    
    printf("The value of average is %f...\n", average(x,y,z));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (a + b + c)/3;
    return result;
}
