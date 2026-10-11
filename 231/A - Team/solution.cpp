#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a , b , c;
    int count , result = 0;
    for(int i = 1 ; i <= n; i++) {
        cin>>a>>b>>c;
        count = a + b + c;
        if(count >= 2) result++;
    }
    cout<<result;
}