#include<bits/stdc++.h>
using namespace std;

//access function
//iterator points to m/m address
//used to access the vector elements
void explain_iterator(){    
    
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i); //inserting elements in vector from 1 to 9
    }
    /*
    cout << "the elements in the vector: ";
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }*/ 
    //this code will print all elements present in vector/array; the below code is simplest way of the given code;
    cout << "the elements in the vector: ";
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    
    vector<int>::iterator name= v.begin(); //v.begin() can be used to print m/m address of 1st element //v.begin() will give m/m address of the array's first element
    cout<<endl<<*(name)<<endl;     //*(v.begin()) will give the data stored in the first address
    
    vector<int>::iterator it= v.end();
    --it;
    cout<<*it<<endl;
    
    cout<<"first element: "<<*(name)<<endl;
    name+=2;
    cout<<"fourth element: "<<*(name);

    cout<<endl<<"front element: "<<v.front();
    cout<<endl<<"back element: "<<v.back();
    cout<<endl<<"vector size: "<<v.size();
}

int main() {
    explain_iterator();
    return 0;
}