#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>suffix_min(n);
    suffix_min[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        suffix_min[i]=min(suffix_min[i+1],a[i]);
    }

    int block=0;
    int max_so_far=0;
    for(int i=0;i<n;i++){
        max_so_far=max(max_so_far,a[i]);
        if(i==n-1 or max_so_far <=suffix_min[i+1]){
            block++;
        }
    }
    cout<<block<<endl;
}