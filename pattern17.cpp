#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i,j,k;
    i=1;
    k=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<< char('A'+k-1);
            j++;
            k++;
        }
        i++;
        cout<<endl;
    }
}