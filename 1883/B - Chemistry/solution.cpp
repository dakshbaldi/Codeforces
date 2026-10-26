#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        
        for(auto c : s) mp[c]++;
        
        for(auto it : mp) {
            if(k == 0) break;
            if(it.second%2 != 0) {
                mp[it.first]--;
                k--;
            }
        }
        
        for(auto it : mp) {
            if(k == 0) break;
            while(k != 0 && mp[it.second] != 0) {
                mp[it.second]--;
                k--;
            }
        }
        
        int count = 0;
        bool ok = true;
        for(auto it : mp) {
            if(it.second%2 != 0 && count >= 1) {
                cout<<"NO"<<endl;
                ok = false;
                break;
            }    
            if(it.second%2 != 0) count++;
        }
        if(ok) cout<<"YES"<<endl;
    }
}