#include<iostream>
using namespace std;
int main(){
    cout<<" ------------------------------- "<<endl;
    int a;
    cout<<"default value of int is : "<< a <<endl; //will print garbage
    cout<<"Size of int " << sizeof(a) <<endl;
    cout<<" ------------------------------- "<<endl;
    float b;
    cout<<"default value of float is : " << b <<endl;
    cout<< "Size of float is "<< sizeof(b) << endl; //will print 0
cout<<" ------------------------------- "<<endl;
    double c;
    cout<<"Default value of double is : " << c << endl; //will print garbage
    cout<<"size of double is " <<  sizeof(c) <<endl; 
cout<<" ------------------------------- "<<endl;
    char d;
    cout<<"default value of char is : " << d << endl; //will print nothing or might be there is space
    cout<< "Size of char is " << sizeof(d) <<endl;
cout<<" ------------------------------- "<<endl;
    bool e;
    cout<<"Default value of boolean : "<< e << endl; //will print 0 (false)
    cout<<"size of boolean is : "<< sizeof(e) <<endl;
    return 0;
}