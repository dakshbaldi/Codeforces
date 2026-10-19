#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        string s;
        cin>>s;
        int ct = 0;
        
        while(s[s.length()-1] == '0') {
            s.pop_back();
            ct++;
        }
        
        int i = s.length()-1;
        while(i > 0) {
            if(s[i] != '0') {
                s.pop_back();
                ct++;
                i--;
            } else {
                i--;
            }
        }
        
        cout<<ct<<endl;
    }
}