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
            int x;
            cin>>x;
            v[i] = x;
        }
        int g = 0;
        for(int i = 0 ; i < n ; i++) {
            int diff = abs(i+1-v[i]);
            g = __gcd(g , diff);
        }
        cout<<g<<endl;
    }
}