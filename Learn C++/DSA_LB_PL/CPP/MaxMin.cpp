#include<iostream>
using namespace std;

int getMin(int num11[],int a){
    int min = INT_MAX;
    for(int i=0;i<a;i++){
        if(num11[i]<min){
            min = num11[i];
        }
    }
    return min;
}

/* USING IN_BUILT FUNCTIONS */
// int getMin(int num[],int a){
//     int min1 = INT_MAX;
//     for(int i=0;i<a;i++){
//         min1 = min(min1,num[i]);
//     }
//     return min1;
// }

int getMax(int num[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

/* USING IN_BUILT FUNCTIONS */
// int getMax(int num1[],int n){
//     int max1 = INT_MIN;
//     for(int i=0;i<n;i++){
//         max1 = max(max1,num1[i]);
//     }
//     return max1;
// }

int main(){
    int size;
    cout<<"Enter a number: "<<endl;
    cin>>size;
    // int num[size]; //It is a bad practice to put variable in declaring variable
    //It is better to define the size of array while declaring it
    int num1[100];
    for(int i=0;i<size;i++){
        cin>>num1[i];
    }
    cout<<"Maximum value is: "<<getMax(num1,size)<<endl;
    cout<<"Minimum value is: "<<getMin(num1,size)<<endl;
    return 0;
}
