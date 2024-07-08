// #include<iostream>
// using namespace std;

// int pow(int num1,int num2){
//     int ans=1;
//     //for(int i=0;i<num2;i++){ /*Alternative method where i=0*/
//     for(int i=1;i<=num2;i++){
//         ans = ans*num1;
//     }
//     return ans;
// }

// int main(){
//     int num1,num2,ans;
//     cout<<"Enter a number: "<<endl;
//     cin>>num1;

//     cout<<"Enter the degree of power: "<<endl;
//     cin>>num2;

//     ans =pow(num1,num2);
//     cout<<ans<<endl;    
//     return 0;
// }


/*                PRACTICE QUESTIONS                   */
//Q. EVEN ODD PROGRAM
/*Approach 1*/
// #include<iostream>
// using namespace std;
// //output is 1-> Even
// //output is 0->Odd
// bool isEven(int a){
//     //odd
//     if(a&1){
//         return 0;
//     }
//     else{
//        //even
//         return 1;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     if(isEven(n)){
//         cout<<"Number is Even.... "<<endl;
//     }
//     else{
//         cout<<"Number is Odd.... "<<endl;
//     }
//     return 0;
// }

/*Approach 2*/
// #include<iostream>
// using namespace std;

// void isEven(int a1){
//     if(a1%2==0){
//         cout<<"The number is even.... "<<endl;
//     }
//     else{
//         cout<<"The number is odd.... "<<endl;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     isEven(num);
//     return 0;
// }


// Q. nCr PROGRAM
// #include<iostream>
// using namespace std;

// int fact(int n){
//     int fact101 =1;
//     for(int i=1;i<=n;i++){
//         fact101 = fact101 * i;
//     }
//     return fact101;
// }

// int nCr(int n,int r){
//     int num = fact(n);
//     int denom = fact(r)*fact(n-r);
//     return num/denom;
// }

// int main(){
//     int n,r;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     cout<<"Enter the value of r: "<<endl;
//     cin>>r;
//     cout<<"The required answer is: "<<nCr(n,r)<<endl;
//     return 0;
// }

// Q. COUNTING PROGRAM
// #include<iostream>
// using namespace std;

// void Count(int a){
//     for(int i=1;i<=a;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     Count(n);
//     return 0;
// }

// Q. PRIME NO. PROGRAM
#include<iostream>
using namespace std;
//1-> Prime no.
//0-> Not a Prime no.
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a Prime Number.... "<<endl;
    }
    else{
        cout<<"It is not a Prime Number.... "<<endl;
    }
    return 0;
}
