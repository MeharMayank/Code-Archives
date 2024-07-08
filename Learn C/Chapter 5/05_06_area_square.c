#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the value of side...\n");
    scanf("%d", &side);
    printf("The value of area is %f...\n", pow(side,2));
    // we will use %f as pow returns double value
    return 0;
}

//OR

// #include<stdio.h>

// int main(){
//     int side;
//     printf("Enter the value of side...\n");
//     scanf("%d", &side);
//     printf("The value of area is %d...\n", side*side);
//     return 0;
// }
