#include<bits/stdc++.h>
using namespace std;

//listing function(can be used for double linked list)
void element_list(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(3); //{2,3}
    
    ls.push_front(5); //{5,2,3}
    ls.emplace_front(2); //{2,5,2,3}

    //rest function same as vector
    //includes begin, end, rbegin, rend, clear, insert, size, swap    
}

int main() {
    element_list();
    return 0;
}