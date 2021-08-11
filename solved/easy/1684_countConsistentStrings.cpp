// https://stackoverflow.com/questions/4068141/how-do-i-check-if-one-vector-is-a-subset-of-another
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::set<char> allowed_set(allowed.begin(), allowed.end());
        int result = 0;
        for(int i = 0; i <= words.size(); i++) {
            cout << words[i];
            std::set<char> word_set(words[i].begin(), words[i].end());
            if (std::includes(allowed_set.begin(), allowed_set.end(), word_set.begin(), word_set.end()))
                result++;
        }
        
        return result;
    }
};
// didn't work out
//
//


// https://stackoverflow.com/questions/4068141/how-do-i-check-if-one-vector-is-a-subset-of-another
// https://www.techiedelight.com/check-element-present-set-cpp/
// understanding break and stuff

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int result = 0;
        set<char> allowed_set(allowed.begin(), allowed.end());
        //for(char c: allowed_set)
            //cout << c << "\n";
        
        for(auto x: words) {
            int temp = 0;
            for(auto c: x) {
                if (allowed_set.find(c) != allowed_set.end()) {
                    temp = 1;
                } else {
                    temp = 0;
                    break;
                }
            }
            result += temp;
        }
        return result;
    }
};


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0 ; i<words.size() ; i++){
            bool flag = true;
            for(char c : words[i]){
                size_t found = allowed.find(c);
                if(found == string::npos) flag=false;
            }
        if(flag == true){
            count++;
        }
        }
    return count;
    }
};


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int myAll[26]{0};
        for(const auto& c : allowed)
            myAll[c - 'a'] = 1;
        
        int res = 0;
        for(const auto& s : words)
        {
            int isGood = true;
            for(const auto& c : s)
                if(!myAll[c - 'a'])
                {
                    isGood = false;
                    break;
                }
            
            if(isGood)
                res++;
        }
        
        return res;
    }
};

// making like a hashmap
