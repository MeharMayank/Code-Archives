#include<stdio.h>

//AREA OF A CIRCLE(NON - WORKING CODE)//
// int main(){
//     int radius = 3;
//     float pi = 3.14;
//     printf("The area of this circle is %f", pi*radius*radius);
//     return 0;
// }

//AREA OF A CIRCLE(WORKING CODE)//
// int main(){
//     int radius;
//     float pi = 3.14; 
//     printf("Input the radius %d \n");
//     scanf("%d", &radius);

//     printf("The area of the circle is %f", pi*radius*radius);
//     return 0;
// }


//VOLUME OF CYLINDER//
int main(){
    float radius;
    float pi = 3.14;
    printf("Input the value of radius \n");
    scanf("%f", &radius);

    int height;
    printf("Input the value of height \n");
    scanf("%d", &height);

    printf("The volume of the cylinder is %f", pi*radius*radius*height);
    return 0;

}
