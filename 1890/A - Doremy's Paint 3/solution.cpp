#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        
        for(int i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        
        unordered_map<int,int> mp;
        
        for(auto value : v) {
            mp[value]++;
        }
        
        if(mp.size() > 2) {
            cout<<"No"<<endl;
        } else if(mp.size() == 1) {
            cout<<"Yes"<<endl;
        } else {
            auto it = mp.begin();
            if(n%2 == 0) {
                if(it->second == n/2) {
                    it++;
                    if(it->second == n/2) {
                        cout<<"Yes"<<endl;
                    } else {
                        cout<<"No"<<endl;
                    }
                } else {
                    cout<<"No"<<endl;
                }
            } else {
                if(it->second == (n-1)/2) {
                    it++;
                    if(it->second == (n+1)/2) {
                        cout<<"Yes"<<endl;
                    }
                } else if(it->second == (n+1)/2) {
                    it++;
                    if(it->second == (n-1)/2) {
                        cout<<"Yes"<<endl;
                    }
                } else {
                    cout<<"No"<<endl;
                }
            }
        }
    }
}