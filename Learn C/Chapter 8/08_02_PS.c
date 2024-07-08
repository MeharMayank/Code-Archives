/*Q2. Write a program to take string as an input from the user using
%c and %s. Confirm that the strings are equal.*/
// #include<stdio.h>
// int main(){
//     char st1[34];
//     char st2[34];
//     char c;
//     int i =0;
//     printf("Enter the value of first string...\n");
//     scanf("%s",st1);
//     printf("Enter the value of second string character by character...\n");

//     while(c!='\n'){
//         fflush(stdin);
//         scanf("%c",&c);
//         st2[i] = c;
//         i++;
//     }
//     st2[i] ='\0';
//     printf("The value of st1 is %s\n",st1);
//     printf("The value of st2 is %s\n",st2);
//     return 0;
// }


/*Q3. Write your own version of strlen function from <string.h>.*/
// #include<stdio.h>
// int strlen(char *st){
//     char *ptr =st;
//     int len =0;
//     while(*ptr!='\0'){
//         len++;
//         ptr++;
//     }
//     return len;
// }
// int main(){
//     char st[] = "Alpha";
//     int l = strlen(st);
//     printf("The length of this string is %d",l);
//     return 0;
// }


/*Q4. Write a function slice() to slice a string. It should change the 
original string such that it is now the sliced string. Take m and n as the 
start and ending position for slice.*/
// #include<stdio.h>
// void slice(char *st, int m, int n){
//     int i=0;
//     while((m+i)<n){
//         st[i] = st[i+m];
//         i++;
//     }
//     st[i]='\0';
// }
// int main(){
//     char st[] = "Alpha";
//     slice(st, 1, 4);
//     printf("%s",st);
//     return 0;
// }


/*Q5. Write your own version of strcpy function from <string.h>.*/
// #include<stdio.h>
// void strcpy(char *destination, const char *source){
//     if(destination==NULL){
//         return NULL;
//     }
//     char *ptr=destination;
//     while(*source!='\0'){
//         *destination = *source;
//         destination++;
//         source++;
//     }
//     *destination = '\0';
//     return ptr;
// }
// int main(){
//     char source[] = "Techie Delight";
//     char destination[25];
//     strcpy(destination,source);
//     printf("%s\n",destination);
//     return 0;
// }


/*Q6. Write a program to encrypt a string by adding 1 to the ASCII value 
of its characters.*/
// #include<stdio.h>
// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr += 1;
//         *ptr++;
//     }
// }
// int main(){
//     char c[] = "Alpha";
//     encrypt(c);
//     printf("Encrypted string is: %s",c);
//     return 0;
// }


/*Q7. Write a program to decrypt the string encrypted using encrypt function
in question 6.*/
// #include<stdio.h>
// void decrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr -= 1;
//         *ptr++;
//     }
// }
// int main(){
//     char c[]="Bmqib";
//     decrypt(c);
//     printf("Decrypted string is: %s",c);
//     return 0;
// }


/*Q8. Write a program to count the occurence of a given character in a 
string.*/
// #include<stdio.h>
// int occurence(char st[],char c){
//     char *ptr =st;
//     int count =0;
//     while(*ptr!='\0'){
//         if(*ptr==c){
//             count++;
//         }
//         ptr++;
//     }
//     return count;
// }
// int main(){
//     char st[]="Alpha";
//     int count = occurence(st,'A');
//     printf("Occurences = %d",count);
//     return 0;
// }


/*Q9. Write a program to check whether a given character is present in a 
string or not.*/
#include<stdio.h>

int occurence(char st[], char c){
    char *ptr =st;
    int count =0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    if(count==0){
        printf("The given character is not present in this string...\n");
    }
    else{
        printf("The given character is present in this string %d times...\n",count);
    }
}

int main(){
    char st[20];
    printf("Enter the string...\n");
    scanf("%s",&st);
    int count = occurence(st,'A');
    return 0;
}
