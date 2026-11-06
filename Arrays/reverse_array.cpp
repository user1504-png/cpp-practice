#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cout<<"enter element value=";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            b[i]=a[n-i-1];    
    }
    
    cout<<"reversed array=";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
/*
int i = 0;
int j = n - 1;

while(i < j) {
    swap(a[i], a[j]);
    i++;
    j--;
}
*/
