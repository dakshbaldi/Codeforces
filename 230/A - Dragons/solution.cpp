#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int s , n;
    cin>>s>>n;
    vector<pair<int,int>> d(n);
    
    for(auto &p : d) {
        cin>>p.first>>p.second;
    }
    
    sort(d.begin() , d.end());
    bool ok = true;
    
    for(auto &p : d) {
        if(p.first < s) {
            s += p.second;
        } else {
            ok = false;
            break;
        }
    }
    
    if(ok == true) cout<<"YES";
    else cout<<"NO";
}