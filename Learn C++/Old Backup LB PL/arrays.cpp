#include<iostream>
using namespace std;

int main(){
   char ch[5] = {'a','b','c','d','e'};
   cout<<ch[3]<<endl;
   cout<<"printing the array"<<endl;
   //PRINT THE ARRAY
   for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";
   }
   cout<<"printing DONE "<<endl;   
   return 0;
}