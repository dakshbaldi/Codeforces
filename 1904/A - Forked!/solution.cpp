#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int dx[] = {1 , -1, -1, 1};
    int dy[] = {1 , 1, -1, -1};
    int t;
    cin>>t;
    
    while(t--) {
        int a , b;
        cin>>a>>b;
        int x_king , y_king;
        cin>>x_king>>y_king;
        int x_queen , y_queen;
        cin>>x_queen>>y_queen;
        set<pair<int,int>> king_hits , queen_hits;
        
        for(int i = 0 ; i < 4 ; i++) {
            king_hits.insert({x_king+dx[i]*a , y_king+dy[i]*b});
            king_hits.insert({x_king+dx[i]*b , y_king+dy[i]*a});
            
            queen_hits.insert({x_queen+dx[i]*a , y_queen+dy[i]*b});
            queen_hits.insert({x_queen+dx[i]*b , y_queen+dy[i]*a});
        }
        
        int count = 0;
        for(auto s : king_hits) {
            if(queen_hits.find(s) != queen_hits.end()) count++;
        }
        cout<<count<<endl;
    }
}