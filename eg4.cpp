#include<iostream>
using namespace std;
int main(){
    int even;
    cin>> even;
    int sum=0;
    int i=2;
    while(i<=even){
        sum = sum + i;
        i  = i +2;
    }
    cout<< sum << endl;
    return 0;
}