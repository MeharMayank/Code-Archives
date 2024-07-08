/* Q. Find the maximum and minimum value in an array. */
// #include<iostream>
// using namespace std;

// int getMax(int num[], int n){
//     int maxi = INT_MIN;
//     for(int i=0;i<n;i++){
//         maxi = max(maxi,num[i]);
//         // if(num[i]>maxi){
//         //     maxi = num[i];
//         // }
//     }
//     return maxi; 
// }
// int getMin(int num[], int n1){
//     int min = INT_MAX;
//     for(int i=0;i<n1;i++){
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     cout<<"Max: "<<getMax(num,size)<<endl;
//     cout<<"Min: "<<getMin(num,size)<<endl;
//     return 0;
// }

/* REVERSING AN ARRAY */
#include<iostream>
using namespace std;
void reverse(int arr[], int num){
    int start =0, end = num-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
    return 0;
}