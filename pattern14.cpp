#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    char k = 'A';
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<k;
            j++;
            k++;
        }
        i++;
        cout<<endl;
    }
}