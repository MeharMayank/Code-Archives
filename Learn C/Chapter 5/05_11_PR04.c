//FIBONACCI SERIES//
#include<stdio.h>
int fib(int x);

int main(){
    int x;
    printf("Enter the required number...\n");
    scanf("%d", &x);

    printf("The required Series is...\n");
    printf("%d", fib(x));
    return 0;
}

int fib(int a){
    if (a==0 || a==1){
        return a;
    }
    else{
        return fib(a-1) + fib(a-2);
    }
}
