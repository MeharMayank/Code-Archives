// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     char alpha;
//     cout<<"Enter the first number: "<<endl;
//     cin>>a;
//     cout<<"Enter the second number: "<<endl;
//     cin>>b;
//     cout<<"Enter the required operator: "<<endl;
//     cin>>alpha;
//     switch(alpha){
//         case '+': cout<<a<<alpha<<b<<" is: "<<a+b<<endl;
//                 break;
//         case '-': cout<<a<<alpha<<b<<" is: "<<a-b<<endl;
//                 break;
//         case '*': cout<<a<<alpha<<b<<" is: "<<a*b<<endl;
//                 break;
//         case '/': cout<<a<<alpha<<b<<" is: "<<a/b<<endl;
//                 break;
//         default: cout<<"Enter the correct values and Retry...."<<endl;
//                 break;
//     }
//     return 0;
// }

////////////////////// PRACTICE QUESTION ///////////////////////////
/* Q. Write a program using switch case to tell how many denominations
    of 100, 50, 20 and 1 notes will be needed in exchange for 1330? */
#include <iostream>
using namespace std;
int main(){
    int n100, n50, n20, n1, amt;
    n100=n50=n20=n1=0;
    cout<<"Enter an amount: "<<endl;
    cin>>amt;
    switch(amt>=100){
        case 1: 
            n100 = amt/100;
            amt -= (n100*100);
            break;
    }
    switch(amt>=50){
        case 1: n50 = amt/50;
                amt -= (n50*50);
                break;
    }
    switch(amt>=n20){
        case 1: n20 = amt/20;
                amt -= (n20*20);
                break;
    }
    switch(amt>=n1){
        case 1: n1 = amt/1;
                amt -= (n1*1);
                break;
    }
    cout<<"The total number of 100's is: "<<n100<<endl;
    cout<<"The total number of 50's is: "<<n50<<endl;
    cout<<"The total number of 20's is: "<<n20<<endl;
    cout<<"The total number of 1's is: "<<n1<<endl;
    return 0;
}