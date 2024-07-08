/*Q1 & 2. Write a program to dynamically create an array of size 6 capable
of storing 6 integers. Use the array to store 6 integers entered by 
the user.*/
#include<stdio.h>
int main(){
    return 0;
}


/*Q4. Create an array dynamically capable of storing 5 integers. Now 
use realloc so that it can now store 10 integers.*/
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr = (int *)malloc(5 * sizeof(int));
//     for(int i=0;i<5;i++){
//         printf("Enter the value of %d element: \n",i);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("The value of %d element is: %d\n",i,ptr[i]);
//     }

//     ptr = (int *)realloc(ptr,10 * sizeof(int));
//     for(int i=0;i<10;i++){
//         printf("Enter the value of %d element: \n",i);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<10;i++){
//         printf("The value of %d element is: %d\n",i,ptr[i]);
//     }
//     return 0;
// }


/*Q5. Create an array of multiplication table of 7 upto 10(7 X 10 = 70).
Use realloc to make it store 15 numbers (from 7 X 1 to 7 X 15).*/
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr = (int *)malloc(10 * sizeof(int));
//     for(int i=0;i<10;i++){
//         ptr[i] = 7*(i+1);
//         printf("The value of 7 X %d = %d\n",i+1,ptr[i]);
//     }
//     ptr = (int *)realloc(ptr,15 * sizeof(int));
//     printf("\nAfter reallocating...\n\n");
//     for(int i=0;i<15;i++){
//         ptr[i] = 7*(i+1);
//         printf("The value of 7 X %d = %d\n",i+1,ptr[i]);
//     }
//     return 0;
// }
