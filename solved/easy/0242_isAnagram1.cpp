class Solution {
public:
    bool isAnagram(string s, string t) {
        // normal way is make it array and then sort and then all the elements need to be the same
        
        // xor way of doing it is
        
        // string s + t should have two of each letter
        // think of an edge case of this
        
        // related topics
        // hashtable string sorting
        
        // solution: make hashtable of sorted strings calc freq and then all are 2 then return true
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(s.length()!=t.length())
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)return false;
        
        map<char, int>mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(int i = 0;i<m;i++){
            if(mp.find(t[i]) != mp.end() and mp[t[i]] > 0){
                mp[t[i]]--;
            }
            else return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;
    }
};
