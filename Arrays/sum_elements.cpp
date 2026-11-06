#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter element=";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"sum of elements="<<sum;
    return 0;
}
