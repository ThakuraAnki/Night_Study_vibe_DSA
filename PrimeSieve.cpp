#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<bool>Primes(n+1,true);
    for(int i=2;i<=n;i++){
        if(Primes[i]==true){
            for(int j=2*i;j<=n;j+=i){
                Primes[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(Primes[i]){
            cout<<i<<"->";
        }

    }
    return 0;

}