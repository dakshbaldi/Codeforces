#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n, x;
        cin>>n>>x;
        
        vector<int> v(n+1);
        
        for(int i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        
        v[n] = x;
        
        int i = 0;
        int j = 1;
        vector<int>temp(n+1);
        temp = v;
        
        while(j <= n) {
            temp[j] -= v[i];
            i++,j++;
        }
        
        temp[n] *= 2;
        sort(temp.begin() , temp.end());
        
        cout<<temp[n]<<endl;
    }
}