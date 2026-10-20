#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n , a , b;
        cin>>n>>a>>b;
        
        if(b == n) {
            cout<<"Yes"<<endl;
            continue;
        }
        
        if(n%2 != 0) {
            if(b>a) {
                if(b%2 != 0) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            } else {
                if(b%2 != 0 && a%2 != 0) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        } else {
            if(b>a) {
                if(b%2 == 0) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            } else {
                if(a%2 == 0 && b%2 == 0) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
    }
}