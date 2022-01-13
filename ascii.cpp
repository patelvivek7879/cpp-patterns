#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if( ch >= 48 && ch <=57) cout<< "Give char is a integer" <<endl;
    if(ch >=65 && ch <=90) cout<<"Given char is a uppercase character"<<endl;
    if(ch>=97 && ch<=122) cout<<"Given char is a lowercase character"<<endl;
    return 0;
}