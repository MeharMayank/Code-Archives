// #include<stdio.h>

// int main(){
//     int length, breadth;
//     int area = length*breadth;
//     printf("The area of this rectangle is %d", area);
//     return 0;
// }
#include<stdio.h>

int main(){
    int length,breadth;
    printf("Input the value of length \n");
    scanf("%d", &length);

    printf("Input the value of breadth \n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d", length*breadth);
    return 0;
}
