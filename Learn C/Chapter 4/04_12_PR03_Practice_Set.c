#include<stdio.h>

int main(){
    //FOR LOOP SOLUTION
    // int i, sum=0;
    
    // int n;
    // printf("Enter the number n\n");
    // scanf("%d", &n);

    // for(i=0; i<=n; i++){
    //     sum +=i;
    // }
    // printf("The value of sum(1 to 10) is %d",sum);

    //WHILE LOOP SOLUTION
    int i =1, sum=0;

    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);
    
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("The value of sum(1 to 10) is %d", sum);
    return 0;
}
