#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int &x : arr){
        cin>>x;
    }

    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }

    for(int i=0;i<n;i++){
        arr[i]%=n;
        arr[i]=(arr[i]+n)%n;
    }

    int remainder=0;

    int rem[1000]={0};
    rem[0]=1;
    for(int i=0;i<n;i++){
        rem[arr[i]]++;

    }

    int ans=0;
    for(int i=0;i<n;i++){
       ans += rem[i] * (rem[i] - 1) / 2;
    }
    cout<<ans<<endl;
    


}