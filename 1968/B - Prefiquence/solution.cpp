#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t , n , m;
    cin>>t;
    string a , b;
    while(t--) {
        cin>>n>>m;
        cin>>a>>b;
        int i = 0 , j = 0;
        
        while(i < n && j < m) {
            if(a[i] == b[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        cout<<i<<endl;
    }
}