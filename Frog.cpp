#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n,vector<int>&heights,vector<int>&dp){

    //base case
    if(n==1){
        return abs(heights[n]-heights[n-1]);
    }
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    //Recursive Case
    int op1,op2;
    op1=abs(heights[n]-heights[n-1])+solve(n-1,heights,dp);
    op2=abs(heights[n]-heights[n-2])+solve(n-2,heights,dp);
    return dp[n]=min(op1,op2);


}

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int &x:arr){
        cin>>x;
    }
     vector<int> dp(n, -1);
    // cout<<solve(n-1,arr,dp);

    //Bottom Up 
    dp[1]=abs(arr[1]-arr[0]);
    int op1,op2;
    for(int i=2;i<n;i++){
        op1=abs(arr[i]-arr[i-1])+dp[i-1];
        op2=abs(arr[i]-arr[i-2])+dp[i-2];
        dp[i]=min(op1,op2);

    }
    cout<<dp[n-1];



    
}