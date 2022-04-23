#include <iostream>
using namespace std;

int main(){

    int n=5;
    for(int i=1;i<=n;i++){
        int cnt=64;
        for(int j=1;j<=2*i-1;j++){
            if(j<=i){
                cout<<(char)++cnt<<" ";
            }
            else{
                cout<<(char)--cnt<<" ";
                
            }
        }
        cout<<endl;
    }
    return 0;
}





















