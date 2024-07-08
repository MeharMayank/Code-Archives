//////////////// SWITCH //////////////////
#include<iostream>
using namespace std;
int main(){
    char ch;
    int num=1;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    switch(ch){
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1': switch(num){
                      case 1: cout<<"Value of num is: "<<num<<endl;
                      break;
                  }
            break;
        default: cout<<"It is default case...."<<endl;
    }
    return 0;
}