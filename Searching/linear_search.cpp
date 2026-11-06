#include<iostream>
using namespace std;
int main(){
    int n,s,count=0;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter the value u wanna search=";
    cin>>s;
    for(int i=0;i<n;i++){
        cout<<"enter element=";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(s==a[i]){
        count+=1;
    }}
    if(count!=0)
    {cout<<"found";}
    else{cout<<"not found";}
    return 0;
}
//use break in loop and conditional statement if u want to stop further searching
