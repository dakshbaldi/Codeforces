#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n = s.length();
    
    multiset<char> ms;
    for(int i = 0 ; i < n ; i += 2) {
        ms.insert(s[i]);
    }
    
    for(auto it = ms.begin() ; it != ms.end() ; it++) {
        cout<<*it;
        
        if(next(it) != ms.end()) cout<<'+';
    }
 
}