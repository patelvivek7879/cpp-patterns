#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        // j=n;
        j=1;
        while(j<=n){
            cout<< n-j+1 <<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}