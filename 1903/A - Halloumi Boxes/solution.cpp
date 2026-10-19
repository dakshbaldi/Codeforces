#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , k;
        cin>>n>>k;
        vector<int>v , temp;
        
        for(int i = 0 ; i < n ; i++) {
            int x;
            cin>>x;
            v.push_back(x);
            temp.push_back(x);
        }
        
        sort(temp.begin() , temp.end());
        bool ok = true;
        
        for(int i = 0 ; i < n ; i++) {
            if(v[i] != temp[i]) {
                ok = false;
                break;
            }
        }
        
        if(ok == true) cout<<"YES"<<endl;
        else {
            if(k < 2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}