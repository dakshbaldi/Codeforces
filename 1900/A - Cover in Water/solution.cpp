#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int i = 0;
        int j = 1;
        bool ok = false;
        
        while(j < n) {
            if(s[j] == '.') {
                if(s[i] == '.') {
                    j++;
                    if(s[j] == '.') {
                        ok = true;
                        break;
                    } else {
                        j += 2;
                        i = j-1;
                        continue;
                    }
                } else {
                    i++ , j++;
                    continue;
                }
            } else {
                j += 2;
                i = j-1;
                continue;
            }
        }
        
        
        if(ok == true) {
            cout<<"2"<<endl;
            } else {
                int ans = 0;
                for(int i = 0 ; i < n ; i++) {
                    if(s[i] == '.') {
                        ans++;
                    }
                }
                cout<<ans<<endl;
            }
    }
}