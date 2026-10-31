#include <bits/stdc++.h>
using namespace std;
 
bool canSix(string p , string q) {
    int n = p.length();
    int m = q.length();
    if(m >= n) return false;
    map<char,int> mp1 , mp2 , mp3;
    for(auto c : p) mp1[c]++;
    for(auto c : q) mp2[c]++;
    
    for(auto it : mp2) {
        if(mp1.find(it.first) == mp1.end()) return false;
        
        mp1[it.first] -= it.second;
        
        if(mp1[it.first] < 0) return false;
        if(mp1[it.first] == 0) mp1.erase(it.first);
    }
    
    mp3 = {{'i' , 1} , {'s' , 1} , {'x' , 1}};
    
    return mp1 == mp3;
}
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , m;
        cin>>n>>m;
        string p , q;
        cin>>p>>q;
        
        if(canSix(p , q)) cout<<"YES
";
        else cout<<"NO
";
        
    }
}