#include <bits/stdc++.h>
using namespace std;
 
vector<int> maxPrime(unordered_map<int,int> &mp , int n) {
    if(mp.find(2) != mp.end() && mp.find(1) == mp.end()) return vector<int> (n , 2);
    if(mp.find(1) != mp.end() && mp.find(2) == mp.end()) return vector<int> (n , 1);
    
    vector<int> ans;
    ans.push_back(2);
    mp[2]--;
    ans.push_back(1);
    mp[1]--;
    
    for(int i = 2 ; i < n ; i++) {
        if(mp[2] > 0) {
            ans.push_back(2);
            mp[2]--;
        } else {
            ans.push_back(1);
            mp[1]--;
        }
    }
    return ans;
}
 
int main() {
    int n;
    cin>>n;
    
    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        mp[x]++;
    }
    
    vector<int> ans = maxPrime(mp , n);
    
    for(int i = 0 ; i < n ; i++) {
        cout<<ans[i]<<" ";
    }
    
}