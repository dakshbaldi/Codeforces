#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        string s , temp;
        cin>>s;
        vector<string> v;
        temp = s;
        
        for(auto &c : temp) {
            if(c == '1') {
                c = '0';
                v.push_back(temp);
                temp = s;
            } else {
                c = '1';
                v.push_back(temp);
                temp = s;
            }
        }
        
        int ct = 0;
        for(auto &val : v) {
            for(auto c : val) {
                if(c == '1') ct++;
            }
        }
        cout<<ct<<endl;
    }
}