/*Q. Substract the Product and Sum of Digits of an Integer. */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int prod=1;
//     int sum=0;
//     while(n!=0){
//         int digit = n%10;
//         prod = prod*digit;
//         sum = sum+digit;
//         n=n/10;
//     }
//     int ans = prod-sum;
//     cout<<ans;
//     return 0;
// }


/*Q. Write a function that takes an unsigned integer and returns the 
number of '1' bits it has (also known as the Hamming Weight).*/
#include<iostream>
using namespace std;

int hammingWeight(uint32_t n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main(){
    uint32_t n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<hammingWeight(n);
    return 0;
}
