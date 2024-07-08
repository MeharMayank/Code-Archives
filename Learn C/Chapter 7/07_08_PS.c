/*Q1. Create an array of 10 numbers. Verify using pointer arithmetic that 
(ptr+2) points to the third element where ptr is a pointer pointing to the 
first element of the array.*/

// #include<stdio.h>
// int main(){
//     int arr[10];
//     int *ptr = &arr[0]; //OR ptr = arr;
//     ptr = ptr+2;
//     if(ptr==&arr[2]){
//         printf("These point to the same location in memory...\n");
//     }
//     else{
//         printf("These do not point to the same location in memory...\n");
//     }
//     return 0;
// }


/*Q3 & Q4. Write a program to create an array of 10 integers and store multiplication
of 5 in it. Also take input from the user using scanf for the same program.*/

// #include<stdio.h>
// int main(){
//     int mul[10];
//     int n;
//     printf("Enter the required number...\n");
//     scanf("%d",&n);
//     for(int i=0;i<10;i++){
//         mul[i]=n*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d X %d = %d\n",n,i+1,mul[i]);
//     }
//     return 0;
// }


/*Q5. Write a program containing a function which reverses the array passed
to it.*/

// #include<stdio.h>
// void reverse(int *arr, int n){
//     int temp;
//     for(int i=0;i<(n/2);i++){
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     reverse(arr,8);
//     for(int i=0;i<8;i++){
//         printf("The value of %d element is: %d\n",i,arr[i]);
//     }
//     return 0;
// }


/*Q6. Write a program containing functions which counts the number of positive 
integers in an array.*/

// #include<stdio.h>
// int countPosnum(int *arr, int n){
//     int poscount = 0;
//     int i;
//     for(i=0;i<n;i++){
//         if(arr[i]>0){
//             poscount++;
//         }
//     }
//     return poscount;
// }

// int main(){
//     int arr[] = {1,-2,3,-4,5,-6,7,-8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Count of Positive elements = %d\n", countPosnum(arr,n));
//     return 0;
// }


/*Q7. Create an array of size 3 X 10 containing multiplication tables of 
the numbers 2,7 and 9 respectively.*/
// #include<stdio.h>
// void printTable(int *mulTable, int num, int n){
    // printf("The multiplication table of %d is: \n",num);
    // for(int i=0;i<n;i++){
    //     mulTable[i] = num*(i+1);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d X %d = %d\n",num,i+1,mulTable[i]);
    // }
    // printf("*****************************************\n");
// }
// int main(){
//     int mulTable[3][10];
//     printTable(mulTable[0],2,10);
//     printTable(mulTable[1],7,10);
//     printTable(mulTable[2],9,10);
//     return 0;
// }


/*Q8. Solve Problem 7 using custom input.*/
// #include<stdio.h>
// void printTable(int *mulTable, int num, int n){
//     printf("The multiplication table of %d is: \n",num);
//     for(int i=0;i<n;i++){
//         mulTable[i] = num*(i+1);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d X %d = %d\n",num,i+1,mulTable[i]);
//     }
//     printf("*****************************************\n");
// }
// int main(){
//     int i,j;
//     printf("Enter the value of i & j...\n");
//     scanf("%d %d",&i,&j);
//     int mulTable[i][j];
//     printTable(mulTable[0],2,10);
// }


/*Q9. Create a 3D array and print the address of its elements in increasing order.*/
// #include<stdio.h>
// int main(){
//     int arr[2][3][4];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<4;k++){
//                 printf("The address of arr[%d][%d][%d] is %u...\n",i,j,k,&arr[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }
