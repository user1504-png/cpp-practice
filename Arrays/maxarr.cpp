#include<iostream>
using namespace std;
int main(){
    int n,max;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter element=";
        cin>>a[i];
    }
    max=a[0];               //min=a[0]
    for(int i=0;i<n;i++){
        if (a[i]>max){     //a[i]<min then min=a[i]
            max=a[i];
        }
    }
    cout<<"maximum element="<<max;
    return 0;
    }
    