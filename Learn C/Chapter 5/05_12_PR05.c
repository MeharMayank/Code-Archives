#include<stdio.h>

int main(){
    int a =3;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}
//Here the compiler runs the argument from right to left
//That's why it will first give 3 as output for a++
//Then the value will be changed to 5 then the value will be printed 5
//And since a=5 so a will be printed as 5
