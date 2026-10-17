#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n , m , a;
    cin>>n>>m>>a;
    
    long long ans1 = (n+a-1)/a;
    long long ans2 = (m+a-1)/a;
    
    cout<<(ans1*ans2);
}