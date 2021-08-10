// https://www.geeksforgeeks.org/stringstream-c-applications/

class Solution {
    public:
        string sortSentence(string s) {

            stringstream str(s); // Used for breaking words
            string word; // to store individual words

            vector <pair<int, string>> temp_result;
            string result;
            int count = 0, i = 0, len = 0;
            while (str >> word) {
                len = word.size();
                cout << word[len-1] << word.substr(0, len-1);
                temp_result.push_back(std::make_pair(word[len-1], word.substr(0, len-1)));
            }
            
            sort(temp_result.begin(), temp_result.end());
            for(auto x: temp_result) {
                result += x.second + " ";
            }
            return result.substr(0, result.size()-1);
        }
};
