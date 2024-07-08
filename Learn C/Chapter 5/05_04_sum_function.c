#include<stdio.h>

int sum(int a, int b);

int main(){
    int c;
    c = sum(2, 5);
    printf("the value of c is %d", c);    
    return 0;
}

int sum( int a, int b){
    //int result;
    //result = a + b;
    int c;
    c = a + b;// C here and above mentioned are different as they
    //are different variables and just thier names are same... 
    //return result;
    return c;
}
