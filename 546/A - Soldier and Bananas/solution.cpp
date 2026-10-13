#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k , n , w;
    cin>>k>>n>>w;
    
    for(int i = 0 ; i <= w ; i++) {
        n -= (i*k);
    }
    
    cout<<max(0 , -n);
}