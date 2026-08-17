#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<int>arr1={4,9,5};
    vector<int>arr2={9,4,9,8,4};

    map<int,int>m;
    for(auto i:arr1){   
        m[i]++;
    }   
    map<int,int>m2;
    for(auto i:arr2){
        m2[i]++;
    }  
    
    int i=0;
    int j=0;
    int n=arr1.size();
    int s=arr2.size();
    vector<int>ans;

    while(i<n && j<s){
        if(m[i].second==m2[j].second){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else {
            i++;
            j++;
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}