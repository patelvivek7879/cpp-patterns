#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i,j;
    i=1;
    while(i<=n){
        j=1;
        char start = 'A'+n-i;

        while(j<=i){
            cout<< start;
            start =  start + 1;
            j++;
        }
        i++;
        cout<<endl;
    }
}