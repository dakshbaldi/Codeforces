#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , q;
        cin>>n>>q;
        vector<long long> prefixSum(n+1 , 0);
        
        for(int i = 1 ; i <= n ; i++) {
            int x;
            cin>>x;
            prefixSum[i] = prefixSum[i-1] + x;
        }
        
        while(q--) {
            int l , r , k;
            cin>>l>>r>>k;
            
            long long sum = prefixSum[n] - (prefixSum[r]-prefixSum[l-1]) + (r-l+1)*k;
            
            if(sum%2 == 0) cout<<"NO
";
            else cout<<"YES
";
        }
    }
}