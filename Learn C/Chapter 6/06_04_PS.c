//Q1: Write a program to print the address of a variable. Use this address
//to get the value of the variable.

// #include <stdio.h>

// int main(){
//     int a=1;
//     printf("The address of variable a is %d\n", &a);
//     printf("The value of the variable a is %d\n", *(&a));
//     return 0;
// }

//OR
// int main(){
//     int a=6, *ptr;
//     ptr = &a;
//     printf("The address of variable a is %d\n", ptr);
//     printf("The value of variable a is %d\n", *ptr);
// }



//Q2: Write a program having a variable i. Print the address of i. Pass
//this variable to a function and print its address. Are these addresses
//same? Why?

// #include<stdio.h>
// void printAdd(int a);

// int main(){
//     int i=4;
//     printf("The address of variable i is %d\n", &i);
//     printAdd(i);
//     return 0;
// }
// void printAdd(int a){
//     printf("The address of variable a is %u", &a);
// }



//Q3: Write a program to change the value of a variable to ten times of its
//current value. Write a function and pass the value by reference.

// #include<stdio.h>
// void changeValue(int *a);

// int main(){
//     int i, *ptr = &i;
//     printf("Enter the value of i:\n");
//     scanf("%d",&i);
//     printf("The current value of i is = %d\n", i);
//     changeValue(ptr);
//     printf("The updated value of i is = %d\n", *ptr);
//     return 0;
// }

// void changeValue(int *a){
//     (*a)*=10;
// }



//Q4: Write a program using a function which calculates the sum and 
//average of two numbers. Use pointers and print the value of sum and 
//average in main().

// #include<stdio.h>
// void sumandAvg(int a, int b, int *sum, float *avg){
//     *sum = a+b;
//     *avg = (float)(*sum)/2;
// }
 
// int main(){
//     int i,j, sum;
//     float avg;
//     i =3;
//     j = 6;
//     sumandAvg(i,j, &sum, &avg);
//     printf("The value of sum is %d\n",sum);
//     printf("The value of avg is %f\n",avg);

//     return 0;
// }



//Q5: Write a program to print the value of a variable i by using pointer 
//to pointer type of variable

// #include<stdio.h>

// int main(){
//     int i =345, *ptr, **ptr_ptr;
//     ptr = &i;
//     ptr_ptr= &ptr;

//     printf("The value of i is %d\n",**ptr_ptr);
//     return 0;
// }



//Q6: Try Ques 3 using call by value and verify that it doesn't change 
//the value of the said variable.

#include<stdio.h>

int main(){
    
    return 0;
}
