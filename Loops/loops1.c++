#include<bits/stdc++.h>
using namespace std;
int main()
{
   //loops example 1
   /*
   int a=9;
   if(a==9){
    cout<<"a is niney"<<endl;
   }
   else {
    if(a<0){
    cout<<"a is smaller"<<endl;
   }
   else{
    cout<<"a is greater"<<endl;
   }
   }*/

   //loops example 2
   /*
   int a=2;
   int b=a+1;
   if((a=3)==b){
    cout<<a;
   }
   else{
    cout<<b;
   }*/

   //loops example 3
   /*
   int a=24;
   if(a<20){
    cout<<"less"<<endl;
   }
   else if(a==24){
    cout<<"equal"<<endl;
   }
   else{
    cout<<"more"<<endl;
   }
   cout<<a;
   */

  //loops example 4👍👌
  /*
  char ch='9';
  int a= ch;
  if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
    cout<<"this is number "<<ch<<endl;
  }
  else if(a=65 && a<=90)
  {
    cout<<"this is upper case "<<ch<<endl;
  }
  else if(a=97 && a<=122)
  {
    cout<<"this is lower case "<<ch<<endl;
  }
*/
  //loops example 5(while loop)
  /*
  int n;
  cout<<"enter n value ";
  cin>>n;
  int i=1;
  while(i<=n){
    cout<<i<<" ";
    i++;
  }*/

  //loops example 6(even numbers sum)
/*
  int n;
  cout<<"enter n value ";
  cin>>n;
  int i=0,sum=0;
while(i<=n){
    sum=sum+i;
    i=i+2;    
}
cout<<"value of sum is "<<sum<<endl;
*/

//loops example 7(fahrenheit to celsius conversion)
/*
float f,c=0;
cout<<"enter temp in fahrenheit ";
cin>>f;
c = (f-32.0)*(5.0/9.0);
cout<<"temp in celsius is "<<c<<endl;
return 0;
*/

//loops example 8(finding prime number)
int n,i=2;
cin>>n;
while(i<n){
 if(n%i==0)
 {
    cout<<"not prime for "<<i<<endl;
 }
 else{
    cout<<"prime for "<<i<<endl;
 }
 i++;
}
}