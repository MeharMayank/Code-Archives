#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age>=90){
        printf("You are above 90, you cannot drive");
    }
    else{
        printf("You can drive\n");
    }
    
    if(age=50)
    //In C a non-zero value is considered to be true
    //like here age = 50 should have given error 
    // but since it's a non zero number, it will give true
    {
        printf("Half Century\n");
    }

    return 0;
}
