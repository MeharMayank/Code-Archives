// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     char op;
//     cout<<"Enter the value of a: "<<endl;
//     cin>>a;
//     cout<<"Enter the value of b: "<<endl;
//     cin>>b;
//     cout<<"Enter the operation which you want to perform: "<<endl;
//     cin>>op;

//     switch(op){
//         case '+':
//             cout<<(a + b)<<endl;
//             break;
//         case '-':
//             {cout<<(a - b)<<endl;} //{} is optional to use
//             break;
//         case '*':
//             cout<<(a * b)<<endl;
//             break;
//         case '/':
//             cout<<(a / b)<<endl;
//             break;
//         case '%':
//             cout<<(a % b)<<endl;
//             break;
//         default: 
//             cout<<"Enter a valid operation.... "<<endl;
//             break;
//     }
//     return 0;
// }


/* PRACTICE QUESTION: Write a program using switch case to tell how many 
denominations of 100, 50 ,20, 1 notes will be needed in exchange for 1330?*/
#include<iostream>
using namespace std;

int main(){
    int n100,n50,n20,n1,amt;
    n100=n50=n20=n1=0;
    cout<<"Enter the amount: "<<endl;
    cin>>amt;

    switch(amt>=100){
        case 1:
            n100 = amt/100;
            amt -= (n100*100);
        break; 
    }
    switch(amt>=50){
        case 1:
            n50 = amt/50;
            amt -= (n50*50);
        break;
    }
    switch(amt>=20){
        case 1:
            n20 = amt/20;
            amt -= (n20*20);
        break;
    }
    switch(amt>=1){
        case 1:
            n1 = amt;
        break;
    }
    cout<<"No. of 100 notes: "<<n100<<endl;
    cout<<"No. of 50 notes: "<<n50<<endl;
    cout<<"No. of 20 notes: "<<n20<<endl;
    cout<<"No. of 1 notes: "<<n1<<endl;
    return 0;
}
