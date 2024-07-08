// #include<iostream>
// using namespace std;

// void pattern1(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         int count = a-i+1;
//         while(count){
//             cout<<"* ";
//             count-=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     pattern1(num);
//     return 0;
// }


///////////////LEETCODE QUESTIONS REVISE////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     int prod=1,sum=0;
//     while(num!=0){
//         int digit = num%10;
//         prod = prod*digit;
//         sum = sum+digit;
//         num = num/10;
//     }
//     int ans = prod-sum;
//     cout<<ans;
//     return 0;
// }

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
    int num;
    cout<<"Enter num"<<endl;
    cin>>num;
    cout<<hammingWeight(num);
    return 0;
}