#include<iostream>
using namespace std;
int main(){
    int n,count=true;
    cout<<"enter size=";
    cin>>n;
    int a[n];//vector<int>a(n)
    for(int i=0;i<n;i++){
        cout<<"enter element=";
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            count=false;
        }
    }
    if(count==false){
        cout<<"its a palindrome";
    }
    else{
        cout<<"its a palindrome";
    }
    return 0;
}
/*
pal=true
i=0
j=n-1
while(i<j){
if(a[i]!=a[j]){
pal=false
}
i++
j--
}*/

//of integer number palindrome
/*
while(n=0){
digit=n%10 "% gives remainder"
reverse=reverse*10+digit
n=n/10 "/ gives quotient" 
}
*/