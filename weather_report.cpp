#include<bits/stdc++.h>
using namespace std;

int total_rain(map<int,int>&mp){
    int total=0;
    cout<<"Total Rain: ";
    for(auto it:mp){
        total = total + it.second;
    }
    cout<<total<<endl;
    return 0;
}

int main() {
    int n;
    map<int,int>mp;
    cout<<"enter number of months: ";
    int c,a;
    cin>>c;
    if(c<13){ cout<<"enter weather input of each month:";
    for(auto i=1;i<=c;i++){
    cin>>a;
    mp[i]=a;
    }  }
    else {  cout<<"months should be less than or equal to 12"<<endl; }

    for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
    }
    //switch case start-->
    cout<<"enter option: ";
    cin>>n;
    switch(n)
    {
    case 1:
        total_rain(mp);
        break;
    case 2:
        //average_rain();
        break;
    case 3:
        //highest_rain();
        break;
    case 4:
        //lowest_rain();
        break;
    case 5:
        break;
    default:
        cout<<"not valid case"<<endl;
        break;
    } 
    return 0;
}