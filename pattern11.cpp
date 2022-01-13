#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}