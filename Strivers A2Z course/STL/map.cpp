#include<bits/stdc++.h>
using namespace std;
void explainmap(){
//map will always have two data where the first data(key) will map to second data(value)
//keys are always unique and store in sorted order
    map<int, int> mp;
    map<int, pair<int,int>>mp1;
    map<pair<int,int>,int>mp2;

    mp[1]=2;// key=1 value=2
    mp.emplace(3, 1); //key=3 value=1

    mp.insert({2,4}); //key=2 value=4

    mp2[{2,3}]=10; //key={2,3} value=10

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp[1]<<endl;

    auto it = mp.find(3);
    cout<<*(it).second;
}

/*another topic is Multimap()
here, everything is same as map,only it can store multiple same keys
and only mp[key] cannot be used here*/

/*another topic is UnorderedMap()
same as set and unordered_set difference*/

int main() {
    explainmap();
    return 0;
}