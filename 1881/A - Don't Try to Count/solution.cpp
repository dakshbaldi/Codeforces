#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , m;
        cin>>n>>m;
        string x , s;
        cin>>x>>s;
        
        int ans = -1;
        
        for(int ct = 0 ; ct < 6 ; ct++) {
            if(x.find(s) != string::npos) {
                ans = ct;
                break;
            }
            x += x;
        }
        
        cout<<ans<<endl;
    }
}