#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        
        for(int i = 0 ; i < n ; i++) {
            int x;
            cin>>x;
            if(x == 1) x++;
            nums[i] = x;
        }
        
        int i = 0 , j = 1;
        
        while(j < n) {
            if(nums[j]%nums[i] == 0) {
                nums[j]++;
                i++;
                j++;
            } else {
                i++;
                j++;
            }
        }
        for(auto val : nums) cout<<val<<" ";
        cout<<"
";
    }
}