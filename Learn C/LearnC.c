// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age\n");
//     scanf("%d",&age);
//     if(age>=90){
//         printf("You are above 90, you cannot drive");
//     }
//     else{
//         printf("You can drive\n");
//     }
//     if(age==50){
//         printf("Half Century\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int rating;
//     printf("Enter your rating (1-5)\n");
//     scanf("%d",&rating);
//     switch(rating){
//         case 1:
//             printf("Your rating is 1\n");
//             break;
//         case 2:
//             printf("Your rating is 2\n");
//             break;
//         case 3:
//             printf("Your rating is 3\n");
//             break;
//         case 4:
//             printf("Your rating is 4\n");
//             break;
//         default:
//             printf("Invalid rating\n");
//             break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number\n");
//     scanf("%d",&a);
//     (a<5)?printf("Hello World--If condition true"):printf("Else condition true");
//     return 0;
// }

//Increment
// #include<stdio.h>
// int main(){
//     int i = 5;
//     printf("The value of i++ is %d\n", ++i);
//     i++; // ---> Pehle print fir increment
//     ++i; // ---> Pehle increment fir print kare
//     printf("The value of i is %d\n", i);
//     i+=10; // --> Increments i by 10
//     printf("The value of i is %d\n", i);
//     return 0;
// }

//Decrement
// Q. Write a program to print n natural numbers
//in reverse order...
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number n\n");
//     scanf("%d", &n);
//     for(int i=n; i; i--){
//         printf("The value of i is %d\n", i);
//     }
//     return 0;
// }

//Break
// #include<stdio.h>
// int main(){
//     int i =0;
//     do{
//         printf("The value of i is %d\n", i);
//         if(i==4){
//             break;
//         }
//         i++;
//     }while(i<10);
//     return 0;
// }

//Continue
// #include<stdio.h>
// int main(){
//     int skip =5;
//     int i =0;
//     while(i<10){
//         i++;
//         if(i!=skip){
//             continue;
//         }
//         else{
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

//Functions inside functions
// #include<stdio.h>
// void GM();
// void GN();
// void GA();

// int main(){
//     GM();
//     return 0;
// }

// void GM(){
//     printf("Good Morning....\n");
//     GN();
// }
// void GN(){
//     printf("Good Night....\n");
//     GA();
// }
// void GA(){
//     printf("Good Afternoon....\n");
// }

//Sum Function
// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int c;
//     c = sum(2,5);
//     printf("The value of c is %d", c);
//     return 0;
// }
// int sum(int a, int b){
//     int c;
//     c = a+b;
//     return c;
// }

//Area Square Function
// #include<stdio.h>
// #include<math.h>

// int area(int side);
// int main(){
//     int side, value;
//     printf("Enter the value of the side...\n");
//     scanf("%d",&side);
//     value = area(side);
//     printf("The required area is: %d", value);
//     return 0;
// }
// int area(int side){
//     int alpha = pow(side,2);
//     return alpha;
// }

// Recursion 
// #include<stdio.h>
// int factorial(int x);
// int main(){
//     int a;
//     printf("Enter a value: \n");
//     scanf("%d",&a);
//     printf("The required value of the factorial for %d is %d\n",a,factorial(a));
//     return 0;
// }
// int factorial(int x){
//     if(x==1 || x==0){
//         return 1;
//     }
//     else{
//         return x*factorial(x-1);
//     }
// }

//Pointers
// #include<stdio.h>
// int main(){
//     int i =34;
//     int *j = &i;
//     printf("The value of i is %d\n",i);
//     printf("The value of i is %d\n",*j);
//     printf("The address of i is %u\n",&i);
//     printf("The address of j is %u\n",j);
//     printf("The value of j is %d\n",*(&j));
//     return 0;
// }

//Call By Reference 
// #include<stdio.h>
// void wrong_swap(int a, int b);
// void swap(int *a, int *b);
// int main(){
//     int x =3, y=4;
//     printf("The value of x and y before swap is %d and %d\n",x,y);
//     // wrong_swap(x,y);
//     printf("Enter the values of x and y: \n");
//     swap(&x,&y);
//     printf("The value of x and y after swap is %d and %d\n",x,y);
//     return 0;
// }
// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

//Arrays input using loops
// #include<stdio.h>
// int main(){
//     int marks[5];
//     for(int i=0; i<5; i++){
//         printf("Enter the value of marks for student %d:\n",i+1);
//         scanf("%d",&marks[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("The values of marks for student %d is: %d\n",i+1,marks[i]);
//     }
//     return 0;
// }

// Array Initialisation
// #include<stdio.h>
// int main(){
//     float a[] = {34,232,23};
//     printf("The value of a[0] is %f\n",a[0]);
//     printf("The value of a[1] is %f\n",a[1]);
//     printf("The value of a[2] is %f\n",a[2]);
//     return 0;
// }

//Pointer Arithmetic
// #include<stdio.h>
// int main(){
//     char i=34;
//     char *ptr =&i;
//     printf("The value of ptr is %u\n",ptr);
//     ptr++;
//     printf("The value of ptr is %u\n",ptr);
//     ptr--;
//     printf("The value of ptr is %u\n",ptr);
//     return 0;
// }

