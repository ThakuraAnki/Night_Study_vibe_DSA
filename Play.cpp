#include<bits/stdc++.h>
#define ll long long 

using namespace std;
int main(){

    vector<string>org={"eat", "tea", "tan", "ate", "nat", "bat"};
    map<string, vector<string>>s; 
    for(auto & i:org){
        string key=i;
        sort(key.begin(), key.end());
        s[key].push_back(i);    
    }
    // sort(s.begin(), s.end());
    for(auto i:s){
        cout<<i.first<<" : ";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }   
}