#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
            if(j!=i)
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<n-i+1;
            if(j!=n-i+1)
            cout<<"*";
        }
        cout<<endl;
    }
}