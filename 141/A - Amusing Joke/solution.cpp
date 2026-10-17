#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s , t , u;
    cin>>s>>t>>u;
    map<char,int> m1 , m2;
    
    for(auto it : s)   m1[it]++;
    for(auto it : t)   m1[it]++;
    for(auto it : u)   m2[it]++;
    
    if(m1 == m2) cout<<"YES";
    else cout<<"NO";
    
}