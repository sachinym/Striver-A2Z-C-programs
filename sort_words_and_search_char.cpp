#include<bits/stdc++.h>
using namespace std;
void sortWordsAndSearchChar (vector<string> vec,char ch){
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i].back()==ch){
            cout<<vec[i]<<" "<<i+1<<endl;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<string> strs;
    string temp="";
    for(int i=0;i<n;i++){
        cin>>temp;
        strs.push_back(temp);
        temp="";
    }  
    char ch;
    cin>>ch;
    sortWordsAndSearchChar(strs,ch);
    return 0;
}