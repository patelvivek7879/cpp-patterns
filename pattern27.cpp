#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    i=1;
    while(i<=n){
        j=1;
        int space = n-i;
        while(space){
            cout<<"  ";
            space = space - 1;
        }

        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }

    int k=i-1;
        while(k){
            cout<<k<<" ";
            k--;
        }
        i++;
        cout<<endl;
    }
}