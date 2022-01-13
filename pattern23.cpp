#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        j=1;
        int space = i-1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        while(j<=n-i+1)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}