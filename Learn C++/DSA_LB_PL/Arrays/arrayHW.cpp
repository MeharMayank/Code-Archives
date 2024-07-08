/*Q. WAP to print sum of all elements in an array. */
#include<iostream>
using namespace std;

int printSum(int arr[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The required sum is: "<<printSum(num,size)<<endl;
    return 0;
}