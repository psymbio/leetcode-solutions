#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int result = (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) ? edges[0][0] : edges[0][1];
        return result;
    }
};



class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // star node with we common between edges
        return e[0][0]==e[1][0] || e[0][0]==e[1][1]? e[0][0]: e[0][1];
    }
};
