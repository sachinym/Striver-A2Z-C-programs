/*Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.*/
#include<bits/stdc++.h>
using namespace std;
string encode(string src)
{     
  int n=src.length();
  string ans;
  ans[0]=src[0];
  for(int i=0;i<n;i++)
  {
      int count=1;
     while(i<n-1 && src[i]==src[i+1] && src[i]!='\0')
     {
         count++;
         i++;
     }
     ans.push_back(src[i]);
     ans.push_back('0'+count);
  }
  return ans;
}
int main() {
    string src="wwwwaaadexxxxxx";
    cout<<encode(src)<<endl;
    return 0;
}