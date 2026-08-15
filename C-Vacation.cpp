#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[1000][3];
int dp[1000][4];
int solve(int day,int ac){
    if(day==n){
        return 0;
    }
    if(dp[day][ac+1]!=-1){
        return dp[day][ac+1];
    }
    int ans=0;
    for(int j=0;j<3;j++){
        if(j==ac)continue;
        ans=max(ans,a[day][j]+solve(day+1,j));
    }
    return dp[day][ac+1]=ans;
}

int main(){

    cin>>n;
   memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
    cout<<solve(0,-1);



}