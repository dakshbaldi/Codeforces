#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        vector<long long> nums(n,0);
        
        for(int i = 0 ; i < n ; i++) {
            int x;
            cin>>x;
            nums[i] = x;
        }
        
        long long ans = nums[n-1]-nums[0];
        
        for(int i = 1 ; i < n ; i++) {
            ans = max(ans , nums[i]-nums[0]);
        }
        
        for(int i = 0 ; i < n-1 ; i++) {
            ans = max(ans , nums[n-1]-nums[i]);
        }
        
        for(int i = 0; i < n-1 ; i++) {
            ans = max(ans , nums[i]-nums[i+1]);
        }
        
        cout<<ans<<"
";
    }
}