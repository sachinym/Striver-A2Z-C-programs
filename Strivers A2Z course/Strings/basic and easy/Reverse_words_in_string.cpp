/*In this problem,
the task is to remove the spaces coming before and after the sentence
and also remove extra spaces inbetween words
ans reverse the words(not letters) without losing its meaning including single spaces inbetween words*/
#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s){
    string temp="",ans=""; //2 string are created
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            temp=temp+s[i]; //if string have no space, send the word to temp string
        }
        else if(s[i]==' ' && temp!=""){ /*if string has space and temp string have words, 
                                        copy the temp string words to ans string with spaces inbetween */
            ans=temp+" "+ans;
            temp="";                    //temp is cleared and ready to take new words
        }
        else{
            continue; //if string have space and temp string is empty, continue for loop
        }
    }
    if(temp!=""){
        ans=temp+" "+ans; //if any word is left out at last, it is added to ans string here.
    }
    return ans.substr(0,ans.size()-1); //if there is space at last of sentence it is removed here.
}
int main() {
    string s;
    getline(cin,s);
    string ans = reverseWords(s);
    cout<<"reverse sentence is: "<<ans;
    return 0;
}