#include<stdio.h>
void printPattern(int x);

int main(){
    int n;
    printf("Enter the number...\n");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}
// for n =3
// *
// ***
// *****

//1 - 1
//2 - 3
//3 - 5
//(2n-1)
void printPattern(int a){
    if(a==1){
        printf("*\n");
        return;
    }
    printPattern(a-1);
    for(int i=0; i<(2*a-1); i++){
        printf("*");
    }
    printf("\n");
}
