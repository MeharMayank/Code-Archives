/*  Sum of numbers from 1 to n. */
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


/*Q. Print a Fibonacci Series and try to print the following output: 
    0,1,1,2,3,5,8,13,21,...   */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int a=0, b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n;i++){
//         int sum = a+b;
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
//     }
//     return 0;
// }


/*Q. Program to find whether a given number is prime or not.*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    bool isPrime =1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a Prime Number...."<<endl;
    }
    else{
        cout<<"Is a Prime Number...."<<endl;
    }
    return 0;
}
