// LOOPS 
// #include<iostream>
// using namespace std;

// int main(){
//     int inp1;
//     cout<<"Enter a number: \n"<<endl;
//     cin>>inp1;
//     if(inp1>0){
//         cout<<"It is positive"<<endl;
//     }
//     else if(inp1<0){
//         cout<<"It is negative"<<endl;
//     }
//     else{
//         cout<<"It is 0!"<<endl;
//     }
//     return 0;
// }


//OUTPUT Q.1
// #include<iostream>
// using namespace std;
// int main(){
//     int a=9;
//     if(a==9){
//         cout<<"NINEY";
//     }
//     else if(a>0){
//         cout<<"Positive";
//     }
//     else{
//         cout<<"Negative";
//     }
//     return 0;
// }


/*Q2. WAP to print "lowercase" if character lies in 'a'-'z' , 
"uppercase" if char lies in 'A'-'Z', "digit" if char lies in '0'-'9'*/

// #include<iostream>
// using namespace std;

// int main(){
//     char a;
//     cout<<"Enter a character: \n";
//     cin>>a;
//     if(a>= 65 && a<=90){
//         cout<<"Input is Uppercase!!"<<endl;
//     }
//     else if(a>=97 && a<=122){
//         cout<<"Input is lowercase!!"<<endl;
//     }
//     else if(a>=48 && a<=57){
//         cout<<"Input is a digit!!"<<endl;
//     }
//     else{
//         cout<<"Re-enter the values...."<<endl;
//     }
//     return 0;
// }

//While loop intro
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     while(i<=n){
//         cout<<i<<" ";
//         i += 1;
//     }
//     return 0;
// }

//Q. WAP to sum all numbers from i to N.
// #include<iostream>
// using namespace std;
// void Sumfunc(int n);

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     Sumfunc(n);
//     return 0;
// }
// void Sumfunc(int n){
//     int num=1, sum=0;
//     while(num<=n){
//         sum += num;
//         num += 1;
//     }
//     cout<<"The required sum is: "<<sum<<endl;
// }


//Q. WAP to sum all even numbers from i to N.
// #include<iostream>
// using namespace std;
// void SumEven(int n);

// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     SumEven(n);
//     return 0;
// }
// void SumEven(int n){
//     int num =2, sum=0;
//     while(num<=n){
//         sum+=num;
//         num+=2;
//     }
//     cout<<"The required sum is: "<<sum<<endl;
// }

//Q. WAP to convert fahrenheit into celsius
// #include<iostream>
// using namespace std;
// void convert(int n);
// int main(){
//     int n;
//     cout<<"Enter the temperature in fahrenheit: "<<endl;
//     cin>>n;
//     convert(n);
//     return 0;
// }
// void convert(int n){
//     int value = (n - 32)*5/9;
//     cout<<"The required temperature in Celsius is: "<<value<<endl;
// }

//Q. WAP to check whether a number is prime or not.
// #include<iostream>
// using namespace std;
// int Prime(int n);
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     Prime(n);
//     return 0;
// }
// int Prime (int a){
//     int i=2;
//     while(i<a){
//         if(a%i==0){
//             cout<<"Number is Not Prime..."<<endl;
//             break;
//         }
//         else{
//             cout<<"Number is Prime..."<<endl;
//             break;
//          }
//         i++;
//     }
// }



//////////////////PATTERN PROBLEMS////////////////////////////
/*Q. Print the following pattern:
    ****
    ****
    ****
    ****                               */
// #include<iostream>
// using namespace std;
// void pattern(int a);
// int main(){
//     int n;
//     cout<<"Input number of rows: "<<endl;
//     cin>>n;
//     pattern(n);
//     return 0;
// }
// void pattern(int a){
//     int i=1;
//     while(i <=a){
//         int j=1;
//         while(j<=a){
//             cout<<"*";
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


/*Q. Print the following pattern: 
      111
      222
      333  */
// #include<iostream>
// using namespace std;
// void pattern2(int a){
//     int i=1, num=1;
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


/*Q.Print the following pattern: 
    1234
    1234 
    1234 */
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
    321 */
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
    789 */
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

// void pattern6(int n){
//     int i=1;
//     while(i<=n){
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
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     pattern6(num);
//     return 0;
// }


/*Q. Print the following pattern: 
    1
    22
    333
    4444  */
// #include<iostream>
// using namespace std;
// void pattern7(int n){
//     int i=1,num=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<num;
//             j++;
//         }
//         cout<<endl;
//         num++;
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
    7 8 9 10  */
// #include<iostream>
// using namespace std;
// void pattern8(int n){
//     int i=1,num=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<" "<<num;
//             j++;
//             num++;
//         }
//         cout<<endl;
//         i++;
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
//     int i =1;
//     while(i<=a){
//         int j=1, num=i;
//         while(j<=i){
//             cout<<num<<" ";
//             j++;
//             num++;
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
//         int count = i;
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
//   ||||||||APPROACH 2||||||||
// #include<iostream>
// using namespace std;
// void pattern10(int a){
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
//     pattern10(n);
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
//     char count = 'A';
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<count<<" ";
//             j++;
//         }
//         cout<<endl;
//         count++;
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
// |||||APPROACH 2|||||
// #include<iostream>
// using namespace std;
// void pattern11(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             char ch = 'A'+i-1;
//             cout<<ch<<' ';
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
//     pattern11(n);
//     return 0;
// }


/*Q. Print the following pattern: 
    A B C
    A B C 
    A B C  */
// #include<iostream>
// using namespace std;
// void pattern12(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         char count = 'A';
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
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     pattern12(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      A B C
      D E F 
      G H I  */
// #include<iostream>
// using namespace std;
// void pattern14(int a){
//     int i=1;
//     char count='A';
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             cout<<count<<' ';
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
//     pattern14(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      A B C
      B C D
      C D E   */
// #include<iostream>
// using namespace std;
// void pattern15(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         while(j<=a){
//             char solve = i+j+'A'-2;
//             cout<<solve<<' ';
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
//     pattern15(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      A
      B B 
      C C C   */
// #include<iostream>
// using namespace std;
// void pattern16(int a){
//     int i=1;
//     char ch='A';
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<ch<<' ';
//             j++;
//         }
//         cout<<endl;
//         i++;
//         ch++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern16(n);
//     return 0;
// }
// |||||ALTERNATE METHOD|||||
// #include<iostream>
// using namespace std;
// void pattern16(int a){
//     int i=1;
//     char solve2= 'A'+i-1;
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<solve2<<' ';
//             j++;
//         }
//         cout<<endl;
//         i++;
//         solve2++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern16(n);
//     return 0;
// }


/*Q. Print the following pattern: 
      A
      B C
      D E F
      G H I J   */
// #include<iostream>
// using namespace std;
// void pattern17(int a){
//     int i=1;
//     char alpha = 'A';
//     while(i<=a){
//         int j=1;
//         while(j<=i){
//             cout<<alpha<<' ';
//             alpha++;
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
//     pattern17(n);
//     return 0;
// }


/*Q. Print the following pattern: 
     D 
     C D
     B C D
     A B C D    */
// #include<iostream>
// using namespace std;
// void pattern18(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         char op1 = 'A'+a-i;
//         while(j<=i){
//             cout<<op1<<' ';
//             op1++;
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
//     pattern18(n);
//     return 0;
// }


/* Print the following pattern:
    A B C
    B C D
    C D E   */
// #include<iostream>
// using namespace std;
// void pattern19(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         // char ch1 = 'A'+i-1;  //Implementation 1
//         char ch2 = 'A'+i+j-2;  //Implementation 2
//         while(j<=a){
//             // cout<<ch1<<' ';  //Imp 1
//             //ch1++;            //Imp 2
//             cout<<ch2<<' '; //Imp 2
//             ch2++;          //Imp 2
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
//     pattern19(n);
//     return 0;
// }


/*Q. Print the following pattern:
        *
      **
     ***
    ****    */
// #include<iostream>
// using namespace std;
// void pattern20(int a){
//     int i=1;
//     while(i<=a){
//         int space= a-i;
//         while(space){
//             cout<<' ';
//             space--;
//         }
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
//     pattern20(n);
//     return 0;
// }


/*Q. Print the following pattern:
      ****
      ***
      **
      *      */
// #include<iostream>
// using namespace std;
// void pattern21(int a){
//     int i=1;
//     while(i<=a){
//         int col = a-i+1;
//         while(col){
//             cout<<"*";
//             col--;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern21(n);
//     return 0;
// }


/*Q. Print the following pattern:
      ****
       ***
        **
         *    */
// #include<iostream>
// using namespace std;
// void pattern22(int a){
//     int i=1;
//     while(i<=a){
//         int space = i-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         int star = a-i+1;
//         while(star){
//             cout<<"*";
//             star--;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern22(n);
//     return 0;
// }


/*Q. Print the following pattern: 
    1 2 3 4
      2 3 4
        3 4
          4   */
// #include<iostream>
// using namespace std;
// void pattern23(int a){
//     int i=1;
//     while(i<=a){
//         int space = i-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         int count=i;
//         int num = a-i+1;
//         while(num){
//             cout<<count;
//             num--;
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern23(n);
//     return 0;
// }


/*Q. Print the following pattern: 
          1
        2 2
      3 3 3
    4 4 4 4 */
// #include<iostream>
// using namespace std;
// void pattern24(int a){
//     int i=1;
//     int num=1;
//     while(i<=a){
//         int space = a-i;
//         while(space){
//         cout<<' ';
//         space--;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<num;
//         j++;
//     }
//     num++;
//     cout<<endl;
//     i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern24(n);
//     return 0;
// }


/*Q. Print the following pattern:
    1 1 1 1
      2 2 2
        3 3
          4    */
// #include<iostream>
// using namespace std;
// void pattern25(int a){
//     int i=1;
//     while(i<=a){
//         int j=1;
//         int space = i-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         int num = a-i+1;
//         int count =i;
//         while(num){
//             cout<<count;
//             num--;
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
//     pattern25(n);
//     return 0;
// }


/*Q. Print the following pattern: 
            1
          2 3
        4 5 6
      7 8 9 10    */
// #include<iostream>
// using namespace std;
// void pattern26(int a){
//     int i=1;
//     int num=1;
//     while(i<=a){
//         int space = a-i;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<num;
//             num++;
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
//     pattern26(n);
//     return 0;
// }


/*Q. Print the following pattern: 
            1
          1 2 1 
        1 2 3 2 1
      1 2 3 4 3 2 1    */
// #include<iostream>
// using namespace std;
// void pattern27(int a){
//     int i=1;
//     while(i<=a){
//         //first triangle
//         int space = a-i;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         //second triangle
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }
//         //third triangle
//         int k=i-1;
//         while(k){
//             cout<<k;
//             k--;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     pattern27(n);
//     return 0;
// }


//////////////////////BITWISE OPERATORS//////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//   int a=4;
//   int b=6;
//   cout<<"a&b is: "<<(a&b)<<endl;
//   cout<<"a|b is: "<<(a|b)<<endl;
//   cout<<"~a is: "<<(~a)<<endl;
//   cout<<"a^b is: "<<(a^b)<<endl;
//   return 0;
// }