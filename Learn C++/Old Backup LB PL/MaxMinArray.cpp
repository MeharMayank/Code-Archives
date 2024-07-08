/*Q. Find Maximum and Minimum values in an array.*/
#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int max = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<max){
            max = num[i];
        }
    }
    return max;
}

int getMax(int num[], int n){
    int min = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int num[100];
    //Taking input of elements in an array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>num[i];
        cout<<endl;

    }
    cout<<"Maximum Value is: "<<getMax(num,size)<<" and the Minimum Value is: "<<getMin(num,size)<<endl;
    return 0;
}
