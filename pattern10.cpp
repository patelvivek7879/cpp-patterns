#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j, k;
    i=1;
    while(i<=n){
    j=1;
        k=i;
        while(j<=i){
            cout<<k<<" ";
            j++;
            k++;
        }
        i++;
        cout<<endl;
    }
}