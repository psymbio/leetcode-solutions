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
