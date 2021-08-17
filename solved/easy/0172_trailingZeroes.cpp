class Solution {
public:
    int trailingZeroes(int n) {

        /*
        Question 4: What is the number of trailing zeroes in 123! ?
        [123/5] = 24
        Now we can either divided 123 by 25 or the result in the above step i.e. 24 by 5.
        [24/5 ]= 4. It is less than 5, so we stop here.*/
        int count_fives = 0;
        while(n >= 5){
            count_fives += n/5;
            n/=5;
        }

        return count_fives;
    }
};
