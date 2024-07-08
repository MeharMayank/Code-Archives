#include<stdio.h>

int main(){
    int i =0, factorial =1;

    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);

    for(i=1; i<=n;i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n, factorial);
    return 0;
}
