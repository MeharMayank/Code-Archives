// #include<stdio.h>
// int main(){
//     char str[] = "Alpha";
//     char *ptr = str;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char *ptr = "Alpha 101";
//     printf("%s",ptr);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char s[34];
//     printf("Enter your name:\n");
//     scanf("%s",s);//or scanf("%s",&s[0]);
//     printf("Your name is %s...\n");
// }


// #include<stdio.h>
// int main(){
//     char s[34];
//     printf("Enter your name:\n");
//     gets(s);
//     puts(s);
//     printf("Your name is %s...\n",s);
//     return 0;
// }

/**********************************************************************/
//String Literary Functions
#include<stdio.h>
#include<string.h>
int main(){
    // char *st = "Alpha";
    // int a = strlen(st);
    // printf("The length of string st is %d", a);
    // char st2[45];
    // strcpy(st2,st);
    // printf("Now the st2 is %s",st2);
    // char st1[45] = "Hello";
    // char *st2 = "Alpha";
    // strcat(st1,st2);
    // printf("Now the st1 is %s",st1);
    char st1[45] = "Hello";
    char *st2 = "Alpha";
    int val = strcmp(st1,st2);
    printf("Now the val is %d",val);
    return 0;
}
