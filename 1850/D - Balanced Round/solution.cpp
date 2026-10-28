#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        long long k;
        cin>>n>>k;
        vector<int> tough;
        for(int i = 0 ; i < n ; i++) {
            int x;
            cin>>x;
            tough.push_back(x);
        }
        sort(tough.begin() , tough.end());
        int i = n-1 , j = n-2;
        int ans = INT_MAX;
        int m = i;
        while(j >= 0) {
            if(n == 1) break;
            
            if(tough[i]-tough[j] <= k) {
                j-- , i--;
                if(j == -1) {
                    ans = min(n-m-1,ans);
                    break;
                }
            } else {
                ans = min(n-(m-i+1),ans);
                j-- , i--;
                m = i;
                continue;
            }
        }
        if(ans == INT_MAX) cout<<"0"<<endl;
        else cout<<ans<<endl;
    }
}