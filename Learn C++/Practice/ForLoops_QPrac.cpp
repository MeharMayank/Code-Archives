// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a number: "<<endl;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }


/*Q. WAP to find sum of all numbers from 1 to n.*/
// #include<iostream>
// using namespace std;
// void sum(int a){
//     int i=1, sum=0;
//     for(i=1;i<=a;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     sum(n);
//     return 0;
// }


/*Q. WAP to print a fibonacci series from till n.*/
// #include<iostream>
// using namespace std;
// void fibonacci(int n){
//     int a=0,b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n;i++){
//         int sum = a+b;
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }


/*Q. WAP to find whether a given number is prime or not.*/
// #include<iostream>
// using namespace std;
// void Prime(int a){
//     bool isPrime =1;
//     for(int i=2; i<a; i++){
//         if(a%i==0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"Not a Prime Number...."<<endl;
//     }
//     else{
//         cout<<"Is a Prime Number...."<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     Prime(n);
//     return 0;
// }


///////////continue demonstrator////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<5;i++){
//         cout<<"Hi"<<endl;
//         cout<<"Hello"<<endl;
//         continue;
//         cout<<"Reply toh karde!"<<endl;
//     }
//     return 0;
// }

//////Vaiables and Scope///////
