#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}