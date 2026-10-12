#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int matrix[5][5];
    
    for(int k1 = 0 ; k1 < 5 ; k1++) {
        for(int k2 = 0 ; k2 < 5 ; k2++) {
            cin>>matrix[k1][k2];
        }
    }
    
    int i = 0 , j = 0;
    for(int k1 = 0 ; k1 < 5 ; k1++) {
        for(int k2 = 0 ; k2 < 5 ; k2++) {
            if(matrix[k1][k2] == 1) {
                i = k1 + 1;
                j = k2 + 1;
            }
        }
    }        
    
    int count = 0;
    while(i != 3 || j != 3) {
        if(i != 3) {
            if(i > 3) i--;
            else i++;
            count++;
        }
        
        if(j != 3) {
          if(j > 3) j--;
          else j++;
          count++;
        }
    }
    
    cout<<count;
    
}