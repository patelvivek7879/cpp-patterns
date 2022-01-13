#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k;
    k=1;
    i=1;
    while(i<=n){
        j=1;
        int space = n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        i++;
        cout<<endl;
    }
}