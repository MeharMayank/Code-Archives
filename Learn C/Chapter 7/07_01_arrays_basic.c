#include <stdio.h>

int main(){
    //Naive way to create 4 ints
    // int marks1, marks2, marks3, marks4;
    // marks 1 = 34;
    //and so on..

    int marks[4];
    marks[0] =34;
    marks[1] = 45;
    //and so on..

    printf("Enter the value of marks for student 1:\n");
    scanf("%d",&marks[0]);
    printf("Enter the value of marks for student 2:\n");
    scanf("%d",&marks[1]);
    printf("You have entered %d and %d",marks[0],marks[1]);
    return 0;
}
