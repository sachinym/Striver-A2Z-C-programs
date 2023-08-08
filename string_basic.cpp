#include<bits/stdc++.h>
using namespace std;
//check length of the sentence
int getlength(char name[]){
    int cnt=0;
    for(int i=0;name[i] != '\0';i++){
        cnt++;
    }
    return cnt;
}
//reverse the sentence as it is
void reverse(char name[],int len){
    for(int i=0;i<len/2;i++){
     swap(name[i],name[len-1-i]);   
    }
}
//check palindrome which don't have special characters.
bool palindrome(char name[],int len){
    int n=len;
    for(int i=0;i<len/2;i++){
        if(name[i]!=name[n-1-i]) return 0;
    }
    return 1;
}
//check palindrome which have space and removed to check 
//along with block letters converted to small letters
bool palindrome2(char name[],int len){
    char s='*',a='+';
    int low=0;
    int high=len-1;
    for(int i=0;i<len;i++){
        name[i]=tolower(name[i]);
    }
    while(low<=high){
        if(!(name[low]>='a' && name[low]<='z')) low++;
        else if(!(name[high]>='a' && name[high]<='z')) high--;
        else if(name[low]==name[high]) {
            low++;
            high--;
        }
        else  
        return false;
    }
    return true;
}
int main() {
    /*string name;
    getline(cin,name);
    cout<<name;*/
    char name[10];
    cin>>name;
    int len=getlength(name);
    cout<<"length is: "<<len<<endl;
    reverse(name,len);
    cout<<"reversed name is: "<<name<<endl;
    if(palindrome2(name,len)==true) cout<<"The name is a palindrome";
    else cout<<"The name is not palindrome"<<endl;
    return 0;
}