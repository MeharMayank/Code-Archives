/*Q1. Write a program to read three integers from a file.*/
// #include<stdio.h>
// int main(){
//     int a, b, c;
//     FILE *ptr;
//     ptr = fopen("ps.txt","r");
//     fscanf(ptr,"%d %d %d",&a,&b,&c);
//     printf("The values of a, b and c is %d, %d and %d...\n",a,b,c);
//     return 0;
// }


/*Q2. Write a program to generate multiplication table of a given number
in text format. Make sure that the file is readable and well formatted.*/
// #include<stdio.h>
// int main(){
    // FILE *ptr;
    // int num;
    // printf("Enter the integer you need the table of:\n");
    // scanf("%d",&num);
    // ptr = fopen("table.txt","w");
    // for(int i=0;i<10;i++){
    //     fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    // }
    // fclose(ptr);
    // printf("Successfully generated table of %d to table.txt\n",num);
//     return 0;
// }


/*Q3. Write a program to read a text file character by character and write
its content twice in a seperate file.*/
// #include<stdio.h>
// int main(){
//     FILE *ptr1,*ptr2;
//     ptr1 = fopen("a.txt","r");
//     ptr2 = fopen("b.txt","w");
//     char c = fgetc(ptr1);
//     while(c!=EOF){
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         c = fgetc(ptr1);
//     }
//     fclose(ptr1);
//     fclose(ptr2);
//     return 0;
// }


/*Q4. Take name and salary of two employees as input from the user and
write them to a text file in the following format:
    name1, 3300
    name2, 7700
*/
#include<stdio.h>
int main(){

    return 0;
}


/*Q5. Write a program to modify a file containing an integer to double 
its value.*/
// #include<stdio.h>
// int main(){
//     return 0;
// }
