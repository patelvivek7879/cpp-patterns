#include<iostream>
using namespace std;

int main(){
    int ch;
    cin >> ch;
    // if(ch => 65 && ch<=97){
    //     cout<<"Given character is lower case"<<endl;
    // }
    cout<< "Hello World" << endl;
    if(ch>= 97 && ch<=122 ) cout<<"Given character is upper case"  <<endl;
    if(ch >= 48 && ch<=57) cout<<"Given character is a number";
    return 0;
}