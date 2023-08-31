/*In this problem, 
the task is to find the largest possible odd number
if not exists, give empty string as result*/
#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string s){
    for(int i=s.length()-1;i>=0;i--) //loop is executed in reverse, so as to remove even numbers from string.
    {
        if(s[i]%2==1) //the odd number divided by 2 will always give reminder as 1
        {
            return s.substr(0,i+1); //substring is used to get longest possible odd number string
        }
    }
    return ""; //if odd number not present, empty string is returned
}
int main() {
    string s;
    getline(cin,s);
    string ans= largestOddNumber(s);
    cout<<"Largest odd number is: "<<ans;
    return 0;
}