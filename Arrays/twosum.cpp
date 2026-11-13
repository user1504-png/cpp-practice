#include<iostream>
using namespace std;
int main(){
    int a[10]={3,4,5,6,7,8};
    int n=12;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]+a[j]==n){
                cout<<i<<j<<" these sre the required indices";
            }
        }
    }
    return 0;

}