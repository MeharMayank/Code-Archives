#include<iostream>
using namespace std;

bool PowerOfTwo(int n){
    int count =0;
    //If n==0, for that we have used n>0 to ensure smooth running
    while(n>0){
        if((n&1)==1){
            count++;
        }
        n >>=1;
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    PowerOfTwo(num)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    return 0;
}