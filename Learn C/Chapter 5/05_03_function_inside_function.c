#include<stdio.h>
void GM();
void GA();
void GN();

int main(){
    GM();
    return 0;
}

void GM(){
    printf("Good Morning...\n");
    GA();
}
void GA(){
    printf("Good Afternoon...\n");
    GN();
}
void GN(){
    printf("Good Night...\n");
}
