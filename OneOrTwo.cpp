#include<bits/stdc++.h>
#define ll long long
using namespace std;


int solve(int *a,int n){

    int cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt++;
        }
    }
    if(cnt%2==1){
        return -1;
    }
    int Que=cnt/2;
    cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt++;
        }
        if(cnt==Que)return i+1;
    }


}

int main(){



    int t;cin>>t;

    while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a,n)<<endl;
}

}