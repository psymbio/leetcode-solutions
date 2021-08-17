// https://www.geeksforgeeks.org/stringstream-c-applications/

class Solution {
public:
    bool isPalindrome(string s) {
        stringstream s2(s);
        string word;
        string sentence_no_space;
        // while(s2 >> word)
        //     sentence_no_space.append(word);

        for(int i = 0; i <= s.size(); i++) {
            // before: isspace(s[i]) || ispunct(s[i])
            if(isalnum(s[i])==false)
                continue;
            else
                sentence_no_space += (s[i] < 'a') ? s[i] + 32 : s[i];
        }
        int left = 0, right = sentence_no_space.size() - 1;
        while(left < right) {
            cout << sentence_no_space[left] << " " <<sentence_no_space[right];
            if(sentence_no_space[left] != sentence_no_space[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
// try to check isPalindrome while in the first loop

bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
        while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }

    return true;
}


class Solution {
public:
    bool isPalindrome(string s) {
        string temp;

        for(char ch: s){
            if(ch >= 48 && ch <= 57 || ch >= 97 && ch <= 122){
                temp += ch;
            }else if(ch >= 65 && ch <= 90){
                temp += ch - 'A' + 'a';
            }
        }
        cout<<temp;
        for(int left = 0, right = temp.length()-1; left < right; left++, right-- ){
            if(temp[left] != temp[right]) return false;
        }

        return true;
    }
};




class Solution {
public:
    bool isAlpaNum(char &c)
    {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
            return true;
        return false;
    }

    bool isPalindrome(string &str)
    {
        int low = 0, high = str.size() - 1;

        while (low <= high)
        {
            while (!isAlpaNum(str[low]) && low < high)
                low++;
            while (!isAlpaNum(str[high]) && low < high)
                high--;

            if (toupper(str[low]) != toupper(str[high]))
                return false;

            low++;
            high--;
        }

        return true;
    }
};
