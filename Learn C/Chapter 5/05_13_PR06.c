//RECURSIVE FUNCTION TO CALCULATE THE SUM
//OF FIRST n NATURAL NUMBERS
#include<stdio.h>
int RecurSum(int a);

int main(){
    int firstnum;
    printf("Enter a positive integer upto which sum of N numbers is required...\n");
    scanf("%d",&firstnum);

    printf("The required sum is %d...\n",RecurSum(firstnum));
    return 0;
}

int RecurSum(int x){
    if (x != 0){
        return x + RecurSum(x - 1);
    }
    else{
        return 0;
    }
}