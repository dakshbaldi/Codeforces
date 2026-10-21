#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        
        for(int i = 0 ; i < n-1 ; i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        int sum = 0;
        
        for(auto value : v) {
            sum += value;
        }
        
        cout<<(-1*sum)<<"
";
    }
}