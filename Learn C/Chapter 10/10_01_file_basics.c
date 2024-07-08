#include<stdio.h>
int main(){
    FILE *ptr;
    int num, num2;
    ptr = fopen("sample.txt","r"); //=> for reading the file
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    fscanf(ptr,"%d",&num2);
    printf("The value of num is %d and num2 is %d\n", num, num2);
    // ptr = fopen("sample.txt","w");//=> for writing the file
    fclose(ptr);
    return 0;
}