class Solution {
public:
    bool isPowerOfThree(int n) {
        int remainder = 0;
        bool result = false;
        if (n == 0) return result;
        while(n != 0 && remainder == 0) {
            // keep dividing by 3 only till the modulus is 0
            remainder = n % 3;
            n /= 3;
        }
        cout << n << " " << remainder;
        if (n == 0 && remainder == 1) return true;
        return false;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        if(n==1) return true;
     while(n>1){
         if(n%3!=0){
            return false;
         }
         n=n/3;
     }
        if(n>=0)
        return true;
        else return false;
    }
};
