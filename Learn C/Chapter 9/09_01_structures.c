// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     int a=34;
//     char b='g';
//     float d=234.3543;
//     struct employee e1; //we declared e1 variable of employee datatype
//     e1.code = 100;
//     e1.salary = 34.454;
//     // e1.name = "Alpha"; --> wont work
//     strcpy(e1.name,"Alpha");
//     printf("%d",e1.code);
//     return 0;
// }


//QUICK QUIZ 
/*Q. Write a program to store the details of 3 employees from user defined
data. Use the structure declared above.*/
#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the value of e1: ");
    scanf("%d",&e1.code);
    printf("Enter the value for salary of e1: ");
    scanf("%d",&e1.salary);
    printf("Enter the name of e1: ");
    scanf("%s",e1.name);
    
    printf("Enter the value of e2: ");
    scanf("%d",&e2.code);
    printf("Enter the value for salary of e2: ");
    scanf("%d",&e2.salary);
    printf("Enter the name of e2: ");
    scanf("%s",e2.name);
   
    printf("Enter the value of e3: ");
    scanf("%d",&e3.code);
    printf("Enter the value for salary of e3: ");
    scanf("%d",&e3.salary);
    printf("Enter the name of e3: ");
    scanf("%s",e3.name);

    return 0;
}