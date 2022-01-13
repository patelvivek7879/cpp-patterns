#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<char('A'+i-1)<<" ";
            j  = j+1;
        }
        i = i+1;
        cout<<endl;
    }
}