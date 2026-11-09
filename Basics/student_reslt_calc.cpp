#include <iostream>
#include <string>
using namespace std;
int main(){
    int total=0,perc,subject=5;
    string name[subject]={"maths","science","sst","gk","english"};
    int marks[subject];

    cout<<"========= student result calculation =========\n\n";
    for(int i=0;i<subject;i++){
        cout<<"Marks of "<<name[i]<<" out of 100 is";
        cin>>marks[i]; 
        total+=marks[i];   }
    
    cout<<"\ntotal marks="<<total;
    perc=(total)/5;
    cout<<"\npercentage="<<perc;
    if(perc>=90)
        cout<<"\ngrade:A";
    else if(perc>80)
        cout<<"\ngrade:B";
    else if(perc>70)
        cout<<"\ngrade:C";
    else if(perc>60)
        cout<<"\ngrade:D";
    else 
        cout<<"\nFAIL";

    cout<<"\n\n=======student result declared========";

}