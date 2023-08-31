/*In this problem, 
the task is to remove the outer most brackets that covers inner brackets 
and print only the inner brackets*/
#include<bits/stdc++.h>
using namespace std;
string removeOuterParanthesis(string s){
    string res; //output string is inserted in this string
    int opened=0; // used just to keep count of opening and closing
    for(char c:s) //every bracket can be approached as a single character which help in checking individually
    {
        if(c=='(' && opened++>0) res = res+c;
        if(c==')' && opened-->1) res = res+c;
    }
    return res;
}
int main() {
    string s;
    cin>>s;
    string result;
    for(char c:s)
    if(c==')'|| c=='('){
        result=removeOuterParanthesis(s);
    }
    cout<<result;
    return 0;
}