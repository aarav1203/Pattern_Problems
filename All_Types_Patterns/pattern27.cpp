#include<iostream>
using namespace std;
 int main(){
 int n=5;

        for(int row = 1; row<=n; row++ ){ 
            
            
            for(int col =1 ; col<=n-row; col++) {
                cout<<" ";
            } 
            if(row==1 || row==n){
            for(int col=1; col<=row; col++){
                cout<<" *";
            }}
            else{ 
                   cout<<" *";
                   for(int col=1; col<=row-2;col++){
                       cout<<"  ";
        
                   }
                   cout<<" *";
            }
        cout<<endl ;
}
};