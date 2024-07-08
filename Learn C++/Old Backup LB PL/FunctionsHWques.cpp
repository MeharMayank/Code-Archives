/*Q. Write a program to find the nth term from its AP of the input by 
the user.*/
// #include<iostream>
// using namespace std;

// void APcalc(){
//     int a,D,N,nthTerm;
//     cout<<"Enter the starting num: "<<endl;
//     cin>>a;
//     cout<<"Enter the common difference: "<<endl;
//     cin>>D;
//     cout<<"Enter the Nth term to be found: "<<endl;
//     cin>>N;
//     nthTerm =  (a+(N-1)*D);
//     cout<<"The "<<N<<"th term of the series is: "<<nthTerm<<endl;
// }

// int main(){
//     APcalc();
//     return 0;
// }


/*Q. Write a program to find the total numbers of set bits in a&b.*/
#include<iostream>
using namespace std;

unsigned int countSetBits(unsigned int n1,unsigned int n2){
    unsigned int count =0;
    while(n1!=0 || n2!=0){
        count += n1&n2;
        n1= n1>>1;
        n2=n2>>1;
    }
    return count;
}

int main(){
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    int ans = countSetBits(num1,num2);
    cout<<"The total number of set bits of "<<num1<<" and "<<num2 <<" is: "<<ans<<endl;
    return 0;
}

/*Q. Write a program to give the nth Fibonacci number from the input by 
user.*/
// #include<iostream>
// using namespace std;

// int Fib(int num){
//     if(num<=1){
//         return num;
//     }
//     else{
//         return (Fib(num-1)+Fib(num-2));
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     cout<<"Required answer is: "<<Fib(num);
//     return 0;
// }
