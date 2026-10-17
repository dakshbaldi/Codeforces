#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int>v;
    
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int left = 0;
    int right = v.size()-1;
    int sereja = 0 , dima = 0;
    
    while(left <= right) {
        if(v[left] >= v[right]) {
            sereja += v[left];
            left++;
        } else {
            sereja += v[right];
            right--;
        }
        
        if(left > right) break;
        
        if(v[left] >= v[right]) {
            dima += v[left];
            left++;
        } else {
            dima += v[right];
            right--;
        }
    }
    
    cout<<sereja<<" "<<dima;
}