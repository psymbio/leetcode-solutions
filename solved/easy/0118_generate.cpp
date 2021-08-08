/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.4 MB, less than 71.18% of C++ online submissions for Pascal's Triangle.
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<vector<int>> result;
        vector<int> temp;
        vector<int> lastrow;
        for (int i = 0; i < numRows; i++) {
            if (i == 0) {
                temp.push_back(1);
                result.push_back(temp);
            } else if (i == 1) {
                temp.push_back(1);
                temp.push_back(1);
                result.push_back(temp);
            } else {
                lastrow = result[result.size() - 1];
                for(auto x: lastrow)
                    cout << x;
                temp.push_back(1);
                for(int j = 0; j < lastrow.size()-1; ) {
                    temp.push_back(lastrow[j] + lastrow[++j]);
                }
                
                temp.push_back(1);
                result.push_back(temp);
            }
            temp.clear();
            lastrow.clear();
        }
        return result;
    }
};


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0;i<numRows;i++){
            vector<int> v(i+1,1);
            for(int j=1;j<i;j++){
                v[j]=result[i-1][j-1]+result[i-1][j];
                }
            result.push_back(v);
        }
        return result;
    } 
};
