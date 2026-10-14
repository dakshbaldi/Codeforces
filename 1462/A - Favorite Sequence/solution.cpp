#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n; i++) {
            cin>>arr[i];
        }
        
        int left = 0;
        int right = n-1;
        vector<int>temp;
        
            for(int i = 0 ; i < n ; i++) {
                if(i%2 == 0) {
                    temp.push_back(arr[left]);
                    left++;
                } else{
                    temp.push_back(arr[right]);
                    right--;
                }
            }
        
        for(int i = 0 ; i < n ; i++) {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
}