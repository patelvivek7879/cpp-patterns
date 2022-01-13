#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        j=1;
        while(j<= n-i+1){
            cout<<j;    
            j++;
        }

        int l = i*2-2;
        while(l){
            cout<<"**";
            l = l-2;
        }

        int k=n-i+1;
        while(k>=1){
            cout<<k;    
            k--;
        }
        i++;
        cout<<endl;
    }
}