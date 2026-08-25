#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    int n;cin>>n;
    deque<int>dq;

    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }

    while(!dq.empty()){
        int x=dq.front();
        dq.pop_front();
        dq.push_back(x);
        cout<<dq.front()<<" ";
        dq.pop_front();
    }


}