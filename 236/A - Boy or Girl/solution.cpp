#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int count = 0;
    
    for(int i = 0 ; i < s.length() ; i++) {
        for(int j = i + 1; j < s.length() ;) {
            if(s[i] == s[j]) s.erase(s.begin() + j);
            else j++;
        }
        count++;
    }
 
    
    if(count % 2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
}