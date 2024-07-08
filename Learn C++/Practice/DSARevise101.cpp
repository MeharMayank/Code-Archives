// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;
//     int prod=1,sum=0;
//     while(num!=0){
//         int digit= num%10;
//         prod = digit*prod;
//         sum = digit+sum;
//         num= num/10;
//     }
//     int ans=prod-sum;
//     cout<<ans;
//     return 0;
// }

/*Q. lowercase and uppercase*/
// #include<iostream>
// using namespace std;

// int main(){
//     char a;
//     cout<<"Enter a character: "<<endl;
//     cin>>a;
//     if(a>=65&&a<=90){
//         cout<<"Input is uppercase!!"<<endl;
//     }
//     else if(a>=97&&a<=122){
//         cout<<"Input is a lowercase!!"<<endl;
//     }
//     else if(a>=48&&a<=57){
//         cout<<"Input is a digit!!"<<endl;
//     }
//     else{
//         cout<<"Re-enter the values...."<<endl;
//     }
//     return 0;
// }

// Q. Sum of all numbers from i to N
// #include<iostream>
// using namespace std;
// int Sumfunc(int num){
//     int n=1,sum=0;
//     while(n<=num){
//         sum += n;
//         n += 1;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cout<<"Enter num: "<<endl;
//     cin>>num;
//     cout<<Sumfunc(num);
//     return 0;
// }

/*Sum of all even numbers from i to N*/
// #include<iostream>
// using namespace std;
// int SumfuncEven(int num){
//     int n=2,sum=0;
//     while(n<=num){
//         sum+=num;
//         num+=2;
//     }
//     return num;
// }

// int main(){
//     int num;
//     cout<<"Enter a num: "<<endl;
//     cin>>num;
//     cout<<SumfuncEven(num);
//     return 0;
// }


//Num is Prime or Not
// #include<iostream>
// using namespace std;
// int Prime(int num){
//     int i=2;
//     while(i<num){
//         if(num%i==0){
//             cout<<"Not Prime"<<endl;
//             break;
//         }
//         else{
//             cout<<"Prime"<<endl;
//             break;
//         }
//         i++;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter a num"<<endl;
//     cin>>num;
//     Prime(num);
//     return 0;
// }


/*PATTERN PRINTS*/
// #include<iostream>
// using namespace std;
// void pattern(int num);

// int main(){
//     int num;
//     cout<<"Enter rows: "<<endl;
//     cin>>num;
//     pattern(num);
//     return 0;
// }

// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cout<<"Enter a num: "<<endl;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1,num1=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<num1;
//             j++;
//         }
//         cout<<endl;
//         num1++;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int n);

// int main(){
//     int num;
//     cout<<"Enter num: "<<endl;
//     cin>>num;
//     pattern(num);
//     return 0;
// }

// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);

// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }

// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<num+1-j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// void pattern(int num1);

// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }

// void pattern(int num1){
//     int i=1;
//     int count=1;
//     while(i<=num1){
//         int j=1;
//         while(j<=num1){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int a);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int a){
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

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1,num1=1;
//     while(i<=num){
//         int j=1;
//         while(j<=i){
//             cout<<num1;
//             j++;
//             num1++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);

// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1,count=i;
//         while(j<=i){
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);

// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1, count=i;
//         while(j<=i){
//             cout<<count;
//             count--;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=i){
//             cout<<i+1-j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }   
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     char count='A';
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<count;
//             j++;
//         }
//         count++;
//         cout<<endl;
//         i++;
//     }
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             char ch='A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         char ch='A';
//         while(j<=num){
//             cout<<ch;
//             j++;
//             ch++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);

// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num){
//     int i=1;
//     char count ='A';
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// void pattern(int num){
//     int i=1;
//     while(i<=num){
//         int j=1;
//         while(j<=num){
//             char solve=i+j+'A'-2;
//             cout<<solve;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void pattern(int num);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num1){
//     int i=1;
//     char ch='A';
//     while(i<=num1){
//         int j=1;
//         while(j<=i){
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//         ch++;
//     }
// }


// #include<iostream>
// using namespace std;
// void pattern(int num1);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num2){
//     int i=1;
//     while(i<=num2){
//         int space=num2-i;
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

// #include<iostream>
// using namespace std;
// void pattern(int a);
// int main(){
//     int num;
//     cin>>num;
//     pattern(num);
//     return 0;
// }
// void pattern(int num1){
//     int i=1;
//     while(i<=num1){
//         int space=i-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         int star=num1-i+1;
//         while(star){
//             cout<<'*';
//             star--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/* MAX_MIN */
// #include<iostream>
// using namespace std;
// int getMax(int arr[],int num);
// int getMin(int arr[],int num1);
// int main(){
//     int size, arr[100];
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<getMax(arr,size)<<endl;
//     cout<<getMin(arr,size)<<endl;
//     return 0;
// }
/* USER DEFINED FUNCTION METHOD */
// int getMax(int arr[],int num1){
//     int max1 = INT_MIN;
//     for(int i=0; i<num1;i++){
//         if(arr[i]>max1){
//             max1 = arr[i];
//         }
//     }
//     return max1;
// }
// int getMin(int arr[], int num){
//     int min1 = INT_MAX;
//     for(int i=0;i<num;i++){
//         if(arr[i]<min1){
//             min1=arr[i];
//         }
//     }
//     return min1;
// }
/* IN-BUILT FUNCTION METHOD */
// int getMin(int num11[],int a){
//     int min2 = INT_MAX;
//     for(int i=0;i<a;i++){
//         min2 = min(min2,num11[i]);
//     }
//     return min2;
// }
// int getMax(int num12[],int b){
//     int max2 = INT_MIN;
//     for(int i=0;i<b;i++){
//         max2 = max(max2,num12[i]);
//     }
//     return max2;
// }

