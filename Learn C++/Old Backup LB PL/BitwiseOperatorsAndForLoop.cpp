/*   BITWISE OPERATORS   */
// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=6;
//     cout<<"a&b is: "<<(a&b)<<endl;
//     cout<<"a|b is: "<<(a|b)<<endl;
//     cout<<"~a is: "<<(~a)<<endl;
//     cout<<"a^b is: "<<(a^b)<<endl;
//     return 0;
// }


/*  LEFT SHIFT & RIGHT SHIFT OPERATORS  */
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(17>>1)<<endl;
//     cout<<(17<<2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;
//     return 0;
// }


/*  PRE/POST INCREMENT/DECREMENT OPERATOR  */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     cout<<(++n)<<endl;
//     cout<<(n++)<<endl;
//     cout<<(n--)<<endl;
//     cout<<(--n)<<endl;
//     return 0;
// }


/*     FOR  LOOPS    */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}
