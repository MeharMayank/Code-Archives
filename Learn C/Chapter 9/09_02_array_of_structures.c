// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     struct employee facebook[100];
//     facebook[0].code=100;
//     facebook[0].salary=100.45;
//     strcpy(facebook[1].name, "Alpha");
//     return 0;
// }


//Another way to initialize structures
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee alpha = {100,34.23,"Alpha"};
    printf("Name is: %s\n",alpha.name);
    printf("Salary is: %f\n",alpha.salary);
    printf("Code is: %d\n",alpha.code);
    return 0;
}