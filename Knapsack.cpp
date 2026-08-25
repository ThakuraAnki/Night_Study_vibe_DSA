#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){


    int n,capacity;
    cin>>n;
    vector<int>weight(10000+1),price(10000+1);
    int dp[2][100002]={0};

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    
    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    for(int i=1;i<=n;i++){
        for(int cap=1;cap<=capacity;cap++){
                int op1=INT_MIN,op2=INT_MIN;
            if(cap>=weight[i-1]){
                op1=price[i-1]+dp[0][cap-weight[i-1]];
            }
            op2=0+dp[0][cap];
            dp[1][cap]=max(op1,op2);
        }
        for(int i=1;i<=capacity;i++){
            dp[0][i]=dp[1][i];
        }
    }
    cout<<dp[1][capacity];

}