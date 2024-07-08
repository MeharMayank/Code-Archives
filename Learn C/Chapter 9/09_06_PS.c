/*Q1. Create a 2D vector using structures in C.*/
// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// int main(){
//     struct vector v1, v2;
//     v1.x =34;
//     v1.y =54;
//     printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
//     return 0;
// }


/*Q2. Write a function sum vector which returns the sum of two vectors
passed to it. The vectors must be two-dimensional.*/
// #include<stdio.h>
// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// struct vector sumVector(struct vector v1, struct vector v2){
//     struct vector result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// };
// int main(){
//     struct vector v1,v2,sum;
//     v1.x = 34;
//     v1.y = 54;
//     printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
//     v2.x = 3345;
//     v2.y = 534;
//     printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
//     sum = sumVector(v1,v2);
//     printf("X dim of result is %d and Y dim of result is %d\n",sum.x,sum.y);
//     return 0;
// }


/*Q4. Write a program to illustrate the use of arrow operator (->) in C.*/
// #include<stdio.h>
// #include<string.h>

// typedef struct student{
//     int rollNo;
//     int class;
//     char name[20]
// }std;
// void show(std std1){
//     printf("The Roll Number of student is: %d\n",std1.rollNo);
//     printf("The Class Number of student is: %d\n",std1.class);
//     printf("The Name of the student is: %s\n",std1.name);
// }
// int main(){
//     std s1;
//     std *ptr;
//     ptr = &s1;
//     ptr->rollNo = 12;
//     ptr->class = 10;
//     strcpy(ptr->name,"Adam");
//     show(s1);
//     return 0;
// }


/*Q5. Write a program with a structure representing a complex number.*/
// #include<stdio.h>
// typedef struct complex{
//     float real;
//     float img;
// }com;
// void show(com c102){
//     printf("The required complex number is %.f + %.fi\n",c102.real,c102.img);
// }
// int main(){
//     com c101;
//     com *ptr;
//     ptr = &c101;
//     ptr->real = 50;
//     ptr->img = 5.2;
//     show(c101);
//     return 0;
// }


/*Q6. Create an array of 5 complex numbers created in Q5 and display them 
with the help of a display function.The values must be taken as input 
from the user.*/
// #include<stdio.h>
// typedef struct complex{
//     int real;
//     int complex;
// }comp;
// void display(comp c){
//     printf("The value of real part is %d\n",c.real);
//     printf("The value of Imaginary part is %d\n",c.complex);
// }
// int main(){
//     comp cnums[5];
//     for(int i=0;i<5;i++){
//         printf("Enter the real value for %d num\n",i+1);
//         scanf("%d",&cnums[i].real);
//         printf("Enter the complex value for %d num\n",i+1);
//         scanf("%d",&cnums[i].complex);
//     }
//     for(int i=0;i<5;i++){
//         display(cnums[i]);
//     }
//     return 0;
// }


/*Q9. Write a structure capable of storing date. Write a function to 
compare those dates.*/
#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
}
int dateCmp(date d1, date d2){
    if(d1.year>d2.year){
        return 1;
    }
    else{
        return 0;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;
}
int main(){
    date d1 = {2,11,21};
    date d2 = {5,4,22};
    display(d1);
    display(d2);
    int a = dateCmp(d1,d2);
    printf("Date Comparison function returns: %d\n",a);
    return 0;
}
