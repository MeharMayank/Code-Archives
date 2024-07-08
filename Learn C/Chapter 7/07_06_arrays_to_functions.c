#include <stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1,*(ptr+i)); //Here *(ptr+i) is refering to the address of index or 
//         //we can say directly refering to the index of the elements in the array
//     }
// }

void printArray(int ptr[],int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1,ptr[i]); 
    }
    ptr[2] =5555;//This value will be changed in arr array of main as well
}

int main(){
    int arr[] = {1,2,3543,34,3,645,23};
    printArray(arr,7);
    printf("%d",arr[2]);
     //Here we are passing the size as well so that 
    //we know when to stop in the for loop and don't jump out of the bounds of the array
    return 0;
}
