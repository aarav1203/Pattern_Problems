#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
       if(i==1 || i==n){
           for(int j=1;j<=i;j++){
               cout<<j<<" ";
           }
       }
       else{
           cout<<"1 ";
           for(int j=1;j<=i-2;j++){
               cout<<"  ";
           }
           cout<<i<<" ";
       }
       cout<<endl;
    }
    return 0;
}