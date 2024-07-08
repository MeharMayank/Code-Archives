/* Q. Function for calculating power of two given numbers.*/
// #include <iostream>
// using namespace std;

// int Power(int a, int b){
//     int ans = 1;
//     for(int i=1;i<=b;i++){
//         ans = ans * a;
//     }
//     return ans;
// };
// int main(){
//     int num1, num2;
//     cout<<"Enter the first number: "<<endl;
//     cin>>num1;
//     cout<<"Enter the second number: "<<endl;
//     cin>>num2;
//     int answer = Power(num1,num2); 
//     cout<<"Answer is: "<<answer<<endl;
//     return 0;
// }


/* Q. Function for finding whether a given number is Even or Odd. */
// #include <iostream>
// using namespace std;
///////// APPROACH 1 /////////
// int EvenOdd(int a){
//     if(a%2==0){
//         cout<<"Even...."<<endl;
//     }
//     else{
//         cout<<"Odd...."<<endl;
//     }
// };
//////// APPROACH 2 //////////
// bool EvenOdd(int a){
//     //odd
//     if(a&1){
//         return 0;
//     }
//     //even
//     else{
//         return 1;
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     ////// APPROACH 1 //////
//     // EvenOdd(num); 
//     ////// APPROACH 2 ///////
//     if(EvenOdd(num)){
//         cout<<"Number is Even: "<<endl;
//     }
//     else{
//         cout<<"Number is Odd: "<<endl;
//     }
//     return 0;
// }


/* Q. Write a program which can calculate nCr.*/
// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i =1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int numerator = factorial(n);
//     int alpha = n-r;
//     int denom = factorial(r) * factorial(alpha);
//     int ans = numerator/denom;
//     return ans;
// }

// int main(){
//     int num , r;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     cout<<"Enter the value of r: "<<endl;
//     cin>>r;
//     cout<<"The required answer is: "<<nCr(num,r);
//     return 0;
// }


/* Q. Write a counting program */
// #include <iostream>
// using namespace std;
// void Count(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     Count(num);
//     return 0;
// }


/* Q. Write a Prime number program */
// #include <iostream>
// using namespace std;
// bool isPrime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     if(isPrime(num)){
//         cout<<"It is Prime"<<endl;
//     }
//     else{
//         cout<<"It is not Prime"<<endl;
//     }
//     return 0;
// }


/* Q. Write a program to calculate the nth term of AP = (3*n+7) where
the input will be provided by the user. */
// #include <iostream>
// using namespace std;
// int AP(int num){
//     int ans = (3*num+7);
//     return ans;
// }
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     cout<<AP(num)<<endl;
//     return 0;
// }


/* Q. Write a program which tells the total number of set bits (1 and 0) 
from given values of a and b. */
// #include<iostream>
// using namespace std;
// int countSetBits(int n){
//     int count =0;
//     while(n!=0){
//         count += n&1;
//         n = n>>1;
//     }
//     return count;
// }
// int SetBits(int a, int b){
//     int totalBits = countSetBits(a) + countSetBits(b);
//     cout<<"Total number of set bits in " <<a<<" and "<<b<<" is "<<totalBits<<endl;
//     return 0;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a: "<<endl;
//     cin>>a;
//     cout<<"Enter the value of b: "<<endl;
//     cin>>b;
//     SetBits(a,b);
//     return 0;
// }


/* Q. Write a program which can return fibonacci series.*/
// #include <iostream>
// using namespace std;
// int Fib(int num){
//     int num1 = 0, num2 = 1, nextTerm =0;
//     for(int i=1;i<=num;i++){
//         if(i==1){
//             cout<<num1<<endl;
//             continue;
//         }
//         else if(i==2){
//             cout<<num2<<endl;
//             continue;
//         }
//         nextTerm = num1 + num2;
//         num1 = num2;
//         num2 = nextTerm;
//         cout<<nextTerm<<endl;
//     }
//     cout<<"Hence the required nth term is: "<<nextTerm<<endl;
//     return 0;
// }
// int main(){
//     int num;
//     cout<<"Enter nth term to be found: "<<endl;
//     cin>>num;
//     Fib(num);
//     return 0;
// }


/* Q. Write a program that takes two intergers 'a' and 'b' as input and calculates the total 
number of set bits (1's and 0's) in the binary representation of all 
numbers between 'a' and 'b'(inclusive): */
// #include <iostream>
// using namespace std;
// int countSetBits(int n){
//     int count = 0;
//     while(n!=0){
//         count += n&1;
//         n = n>>1;
//     }
//     return count;
// }
// int TotalSetBits(int a, int b){
//     int totalBits =0;
//     for(int i=a;i<=b;i++){
//         totalBits += countSetBits(i);
//     }
//     cout<<"Total number of set bits between "<<a<<" and "<<b<<" is "<<totalBits<<endl;
//     return 0;
// }
// int main(){
//     int a,b;
//     cout<<"Enter two integers a and b: "<<endl;
//     cin>>a>>b;
//     TotalSetBits(a,b);
//     return 0;
// }