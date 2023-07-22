#include<bits/stdc++.h>
using namespace std;
void explainpq(){
    //also called as Maximum heap
    //in here the elements are arranged in descending order 
    priority_queue<int> pq;

    pq.push(2); //{2}
    pq.push(5); //{5,2}
    pq.push(8); //{8,5,2}
    pq.push(7); //{8,7,5,2}
    pq.emplace(10); //{10,8,7,5,2}
    cout<<pq.size()<<endl;
    for(auto i=0;i<=pq.size()+3;++i)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //also called as Minimum heap
    //in here, the elements are arranged in ascending order
    priority_queue<int, vector<int>, greater<int>> pq1;
    
    pq1.push(3); //{3}
    pq1.push(5); //{3,5}
    pq1.push(8); //{3,5,8}
    pq1.push(10); //{3,5,8,10}
    pq1.emplace(7); //{3,5,7,8,10}
    for(auto i=0;i<=pq1.size()+3;i++){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    
}
int main() {
    explainpq();
    return 0;
}