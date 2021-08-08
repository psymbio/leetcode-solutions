class Solution {
public:
    void swap(char*x , char*y)
    {
        char temp = *x;
        *x = *y;
        *y = temp;
    }
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            swap(&s[i],&s[j]);
            i++;
            j--;
        }
        
    }
};
