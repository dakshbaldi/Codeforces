#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        
        for(int i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        
        bool changed = true;
        
        while(changed) {
            changed = false;
            
            for(int i = 1 ; i < n-1 ; i++) {
                if(v[i] > v[i-1] && v[i] > v[i+1]) {
                    swap(v[i],v[i+1]);
                    changed = true;
                }
            }
        }
        bool ok = true;
        
        for(int i = 0 ; i < n-1 ; i++) {
            if(v[i] > v[i+1]) {
                ok = false;
                break;
            }
        }
        
        if(ok == false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}