#include<stdio.h>
float tempConvertor(float a);

int main(){
    float x;
    printf("Enter the temperature in Celsius...\n");
    scanf("%f", &x);

    tempConvertor(x);
    return 0;
}

float tempConvertor(float a){
    float result;
    result = (a * 9/5) + 32;
    printf("The required temperature is %f farenheit..\n", result); 
}
