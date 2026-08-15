#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    //   vector<vector<int>> vec = {{3, 1}, {2, 5, 9}, {1, 9}};
    //   sort(vec.begin(), vec.end());
    //     for (const auto& v : vec) {
    //     for (int x : v) cout << x << " ";
    //     cout << "\n";
    // }

      vector<vector<int>> vec = {{3, 1}, {2, 5, 9}, {1, 9}};

    // Sort by the size of the inner vector
    sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b) {
        return a.size() < b.size();
    });
 
    sort(vec.begin(),vec.end(),[](const vector<int>& a, const vector<int>&b)){
        return a.size()<b.size();
    }
    for (const auto& v : vec) {
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}