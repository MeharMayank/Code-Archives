//OUTPUT QUESTION PRACTICE

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 2;
//     int b = a+1;
//     if ((a=3)==b)
//     {
//         cout<<a;
//         cout<<"Tango 1";
//     }
//     else
//     {
//         cout<<a+1;
//         cout<<"Tango 2";
//     }
//     return 0;
// }


/*Q. Check whether the given character is in upper case, lower case or non alphabetic character*/ 
// #include<iostream>
// using namespace std;

// void check(char ch){
//     if(ch>='A' && ch<='Z'){
//         cout<<"Given character is in uppercase..."<<endl;
//     }
//     else if(ch>='a' && ch<='z'){
//         cout<<"Given character is in lowercase..."<<endl;
//     }
//     else{
//         cout<<"Given value is numeric..."<<endl;
//     }
// }

// int main(){
//     char ch;
//     cout<<"Enter a value..."<<endl;
//     cin>>ch;
//     check(ch);
//     return 0;
// }


/*Q. Find sum of all even numbers.*/
// #include<iostream>
// using namespace std;

// void evenSum(int n){
//     int num =2, sum = 0;
//     while(num<=n){
//         sum += num;
//         num += 2;
//     }
//     cout<<"The required sum is: "<< sum<< endl;
// }

// int main(){
//     int n;
//     cout<<"Enter a number..."<<endl;
//     cin>>n;
//     evenSum(n);
//     return 0;
// }


/*Q. Program to convert fahrenheit to celsius.*/
// #include<iostream>
// using namespace std;

// void convert(int a){
//     int value = (a - 32)*5/9;
//     cout<< "The required temperature in Celsius is: "<<value<<" C..."<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter temperature in Fahrenheit: "<<endl;
//     cin>>n;
//     convert(n);
//     return 0;
// }


/*Q. Find whether a given number is prime or not.*/
// #include<iostream>
// using namespace std;

// void primeCheck1(int a){
//     int i=2;
//     while(i<a){
//         if(a%i==0){
//             cout<<a<<" is Not Prime..."<<endl;
//             break;
//         }
//         else{
//             cout<<a<<" is Prime..."<<endl;
//             break;
//         }
//         i++;
//     }
// }
// /*Here we have added break in order to stop the program once the 
//   identification of prime is done. Otherwise it will display the 
//   status for each number in the loop.*/
// int main(){
//     int n;
//     cout<<"Enter a number..."<<endl;
//     cin>>n;
//     primeCheck1(n);
//     return 0;
// }

/*********************************************************************/
//                NOTE: Here i = rows and j = columns
/*********************************************************************/

/*Q. Print the following pattern: 
      **** 
      ****
      ****
      ****  */
// #include<iostream>
// using namespace std;

// void pattern(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<"*";
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// int main(){
//     int n;
//     cout<<"Input number of rows: "<<endl;
//     cin>>n;
//     pattern(n); 
//     return 0;
// }


/*Q. Print the following pattern: 
      111
      222
      333  */
// #include<iostream>
// using namespace std;

// void pattern2(int a){
//     int i=1;
//     int num=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<num;
//             j++;
//         }
//         cout<<endl;
//         i++;
//         num++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern2(n);
//     return 0;
// }


/*Q. Print the following pattern: 
     1234
     1234 
     1234  */
// #include<iostream>
// using namespace std;

// void pattern3(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern3(n);
//     return 0;
// }


/*Q. Print the following pattern:
    321
    321
    321  */
// #include<iostream>
// using namespace std;

// void pattern4(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<a-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern4(n);
//     return 0;
// }


/*Q. Print the following pattern:
     123
     456
     789  */
// #include<iostream>
// using namespace std;

// void pattern5(int a){
//     int i=1;
//     int count=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern5(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      * 
      **
      ***
      ****  */
// #include<iostream>
// using namespace std;

// void pattern6(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern6(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      1
      22
      333
      4444  */
// #include<iostream>
// using namespace std;

// void pattern7(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern7(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      1
      2 3
      4 5 6
      7 8 9 10   */
// #include<iostream>
// using namespace std;

// void pattern8(int a){
//     int row=1;
//     int count=1;
//     while(row<=a){
//         int col=1;
//         while(col<=row){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern8(n);
//     return 0;
// }


/*Q. Print the following pattern:
     1
     2 3
     3 4 5
     4 5 6 7  */
// #include<iostream>
// using namespace std;

// void pattern9(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         int count=i;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern9(n);
//     return 0;
// }


/*Q. Print the following pattern:
     1
     2 1
     3 2 1
     4 3 2 1  */
// #include<iostream>
// using namespace std;

// void pattern10(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         int count=i;
//         while(j<=i){
//             cout<<count<<" ";
//             count--;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern10(n);
//     return 0;
// }

//    Approach 2
// #include<iostream>
// using namespace std;

// void pattern102(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<(i-j+1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }    
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern102(n);
//     return 0;
// }


/*Q. Print the following pattern: 
     A A A
     B B B
     C C C   */
// #include<iostream>
// using namespace std;

// void pattern11(int a){
//     int i=1;
//     char count ='A';
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<count<<' ';
//             j++;
//         }
//         count++;
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern11(n);
//     return 0;
// }

//   Approach 2
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout<<ch<<' ';
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


/*Q. Print the following pattern: 
      A B C
      A B C 
      A B C   */
// #include<iostream>
// using namespace std;

// void pattern12(int a){
//       int i=1;
//       while(i<=a){
//             int j=1;
//             char count='A';
//             // char app2 = ('A'+j-1); /*Approach 2*/
//             while(j<=a){
//                   cout<<count<<' ';
//                   count++;
//                   // cout<<app2<<' ';  /* Approach 2  using formula */
//                   // app2++;  /* Approach 2 */
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
// }

// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       pattern12(n);
//       return 0;
// }


/*Q. Print the following pattern: 
      A B C
      D E F 
      G H I  */
// #include<iostream>
// using namespace std;

// void pattern13(int a){
//       int i=1;
//       char count='A';
//       while(i<=a){
//             int j=1;
//             while(j<=a){
//                   cout<<count<<' ';
//                   count++;
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
// }

// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       pattern13(n);
//       return 0;
// }


/*Q. Print the following pattern: 
      A B C
      B C D
      C D E   */
// #include<iostream>
// using namespace std;

// void pattern14(int a){
//       int i=1;
//       while(i<=a){
//             int j=1;
//             while(j<=a){
//                   char op = 'A'+i+j-2;
//                   /*            Code derivation   
//                     As we already knew, that for achieving 123
//                                                            234 kind
//                   of pattern we will use the formula i+j-1 i.e. 
//                   i+j-1 = 1 But in order to map character with the formula,we only had to get 'A' on RHS somehow. So we will add 'A'-1 on both sides and we will get         'A'+i+j-2 = 'A' out of which 'A'+i+j-2 is the required formula. */
//                   cout<<op<<' ';
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
// }

// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       pattern14(n);
//       return 0;
// }


/*Q. Print the following pattern: 
      A
      B B 
      C C C   */
// #include<iostream>
// using namespace std;
// int main(){
//       int n; 
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       char ch='A';
//       while(i<=n){
//             int j=1;
//             while(j<=i){
//                   cout<<ch<<' ';
//                   j++;
//             }
//             ch++;
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }

// //  Alternative Method
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             char op='A'+i-1;
//             int j=1;
//             while(j<=i){
//                   cout<<op<<' ';
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
      A
      B C
      D E F
      G H I J   */
// #include<iostream>
// using namespace std;

// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       char ch ='A';
//       while(i<=n){
//             int j=1;
//             while(j<=i){
//                   cout<<ch<<' ';
//                   ch++;
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern:
      A
      B C 
      C D E
      D E F G  */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             int j=1;
//             while(j<=i){
//                   char op = 'A'+i+j-2;
//                   cout<<op<<' ';
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
     D 
     C D
     B C D
     A B C D    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             int j=1;
//             char op = 'A'+n-i;
//             while(j<=i){ 
//                   cout<<op<<' ';
//                   op++;
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/* Print the following pattern:
    A B C
    B C D
    C D E   */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       int i=1;
//       while(i<=n){
//             int j=1;
//             char ch = 'A'+i-1;
//             while(j<=n){
//                   cout<<ch<<' ';
//                   ch++;
//                   j++;
//             }
//             cout<<endl;
//             i++;
//      }
//       return 0;
// }


/*Q. Print the following pattern:
         *
        **
       ***
      ****    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             int space=n-i;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int j=1;
//             while(j<=i){
//                   cout<<'*';
//                   j++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern:
      ****
      ***
      **
      *      */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             int star = n-i+1;
//             while(star){
//                   cout<<"*";
//                   star--;
//             }
//             cout<<endl;
//             i++;
//       }
// }


/*Q. Print the following pattern:
      ****
       ***
        **
         *    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;

//       int i=1;
//       while(i<=n){
//             int space =i-1;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int star = n-i+1;
//             while(star){
//                   cout<<"*";
//                   star--;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
      1 2 3 4
        2 3 4
          3 4
            4   */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       int i=1;
//       while(i<=n){
//             int space=i-1;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int count=i;
//             int num=n-i+1;
//             while(num){
//                   cout<<count;
//                   num--;
//                   count++;
//             }
            
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
            1
          2 2
        3 3 3
      4 4 4 4   */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       int i=1;
//       int num=1;
//       while(i<=n){
//             int space=n-i;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int j=1;
//             while(j<=i){
//                   cout<<num;
//                   j++;
//             }
//             num++;
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern:
      1 1 1 1
        2 2 2
          3 3
            4    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       int i=1;
//       int count=1;
//       while(i<=n){
//             int space=i-1;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int num=n-i+1;
//             while(num){
//                   cout<<count;
//                   num--;
//             }
//             count++;
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
            1
          2 3
        4 5 6
      7 8 9 10    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       int i=1;
//       int num=i;
//       while(i<=n){
//             int space=n-i;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             int j=1;
//             while(j<=i){
//                   cout<<num;
//                   j++;
//                   num++;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern: 
            1
          1 2 1 
        1 2 3 2 1
      1 2 3 4 3 2 1    */
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter a number: "<<endl;
//       cin>>n;
//       //space area
//       int i=1;
//       while(i<=n){
//             int space=n-i;
//             while(space){
//                   cout<<' ';
//                   space--;
//             }
//             // second triangle
//             int j=1;
//             while(j<=i){
//                   cout<<j;
//                   j++;
//             }
//             //third triangle
//             int num101=i-1;
//             while(num101){
//                   cout<<num101;
//                   num101--;
//             }
//             cout<<endl;
//             i++;
//       }
//       return 0;
// }


/*Q. Print the following pattern:
      1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1    */
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter a number: "<<endl;
      cin>>n;
      //first triangle
      int i=1;
      while(i<=n){
            int j=1;
            int count=1;      
            int num = n-i+1;
            while(num){
                  cout<<count<<' ';
                  count++;
                  num--;
                  j++;
            }
            //second triangle
            int k=1;
            while(k<=i){
                  cout<<'*'<<' ';
                  k++;
            }
            //third triangle
            int l=i-1;
            while(l){
                  cout<<'*'<<' ';
                  l--;
            }
            //fourth triangle
            int alpha=n-i+1;
            while(alpha){
                  cout<<alpha<<' ';
                  alpha--;
                  j++;
            }
            cout<<endl;
            i++;
      }
      return 0;
}
