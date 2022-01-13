#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k;
    i=1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space = space -1;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}