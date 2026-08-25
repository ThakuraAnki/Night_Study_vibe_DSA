#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    string s;cin>>s;

    int n=s.size();
    vector<ll>Left_Max_Swap(n),Right_Max_Swap(n);
    int leftswap=(s[0]=='R');

    for(int i=1;i<n;i++){
        if(s[i]=='R'){
            Left_Max_Swap[i]=Left_Max_Swap[i-1];
            leftswap++;
        }else{
            Left_Max_Swap[i]=Left_Max_Swap[i-1]+leftswap;
        }
    }
    int rightswap=(s[n-1]=='R');

    for(int i=n-2;i>=0;i--){
        if(s[i]=='R'){
            Right_Max_Swap[i]=Right_Max_Swap[i+1];
            rightswap++;
        }else{
            Right_Max_Swap[i]=Right_Max_Swap[i+1]+rightswap;
        }
    }
    ll ans=INT_MAX;
    for(int i=0;i<n;i++){
        ll no=Left_Max_Swap[i];
        if(i!=n-1)
        no+=Right_Max_Swap[i];
        ans=min(ans,no);
        
    }
     if(ans > int(1e9))
        ans = -1;
    cout << ans << "\n";
}

