#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int & x:arr){
        cin>>x;
    }

    vector<int>dp(n+1,0);
    dp[0] = 0;
    dp[1] = abs(arr[1] - arr[0]);
    int op1,op2;
    for(int i=1;i<n;i++){
        int ans=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i>=j){
              ans = min(ans,dp[i - j] + abs(arr[i] - arr[i - j]));
            }
        }
        dp[i]=ans;
    }
    cout<<dp[n-1]<<endl;

}