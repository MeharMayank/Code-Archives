#include<stdio.h>

int main(){
    int year;
    printf("Enter the year...\n");
    scanf("%d",&year);

    if(year%4 == 0){
        printf("The given year is the leap year...\n");
    }
    else{
        printf("The given year is not a leap year...\n");
    }
    return 0;
}
