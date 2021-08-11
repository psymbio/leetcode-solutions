class Solution {
public:
    int firstUniqChar(string s) {
        int result = 0;
        std::vector<char> v(s.begin(), s.end());
        
        /*
        sort(v.begin(), v.end());
        // sort but keep index
        for(int i = 0; i < v.size(); ) {
            cout << v[i];
            if(v[i] == v[i++]) {
                result++;
                i++;
            }
        }
        */
        
        std::unordered_map<char, int> freq;
        for(auto x: s)
            freq[x]++;
        
        for(auto x:freq)
            if(x.second == 1) 
                result = x.first;
        
        int found = s.find(result);
        return found;
    }
};
