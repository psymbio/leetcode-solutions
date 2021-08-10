class Solution {
public:
    int titleToNumber(string columnTitle) {
        // case ZY = LETTERFACEVALUE(26) * 26 + 25
        // case AB = LETTERFACEVALUE(1) * 26 + 2
        
        // case ABC = LETTERFACEVALUE(A) * 26^2 + LETTERFACEVALUE(B) * 26^1 + LETTERFACEVALUE(C) * 26^0
        int result = 0, letter = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            letter = columnTitle[i] - 64;
            result += letter * pow(26, columnTitle.size()- 1 - i);
        }
        
        return result;
    }
};


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ret = 0;
        for(char &c : columnTitle)
            ret = (long long)ret * 26 + c - 'A' + 1;
        return ret;
        
    }
};
