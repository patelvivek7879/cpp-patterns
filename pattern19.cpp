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
            cout<<char('A'+ j+ i - 2);
            j = j+1;
        }
        i = i+1;
        cout<<endl;
    }
}