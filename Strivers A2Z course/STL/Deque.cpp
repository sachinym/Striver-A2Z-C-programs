#include<bits/stdc++.h>
using namespace std;


void explainDeque(){
    deque<int> dq;

    dq.push_back(2); //{2}
    dq.emplace_back(3); //{2,3}
    
    dq.push_front(5); //{5,2,3}
    dq.emplace_front(2); //{2,5,2,3}

    dq.pop_back(); //{2,5,2}
    dq.pop_front(); //{5,2}

    dq.back();
    dq.front();

    //rest function same as vector
    //includes begin, end, rbegin, rend, clear, insert, size, swap    
}

int main() {
    explainDeque();
    return 0;
}