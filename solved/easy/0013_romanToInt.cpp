// https://www.geeksforgeeks.org/unordered_map-at-cpp/

// #include <typeinfo>
class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> values ({{'I', 1},
                                           {'V', 5},
                                           {'X', 10},
                                           {'L', 50},
                                           {'C', 100},
                                           {'D', 500},
                                           {'M', 1000}});
        
        int result = 0;
        char current_char = s[s.size()-1];
        // cout << current_char;
        // cout << values.at('I');
        for(int i = s.size()-1; i >= 0; --i) {
            //cout << s[i];
            if(values.at(current_char) > values.at(s[i])) {
                // cout << "hey";
                result -= values.at(s[i]);
                cout << result;
                continue;
            }
            // cout << "hey here";
            // std::cout << typeid(s[i]).name() << '\n';
            result += values.at(s[i]);
            cout << result;
            current_char = s[i];
        }
        
        return result;
    }
};
