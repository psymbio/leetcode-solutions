class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
	unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        for (auto x : freq)
            if(x.second==1)
                return x.first;
        return 0;
    }
};


/*
 *
 * https://youtu.be/5ATrVxnxINE
For anyone who didn't understood why this works here is an explanation. This XOR operation works because it's like XORing all the numbers by itself. So if the array is {2,1,4,5,2,4,1} then it will be like we are performing this operation

((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5.

Hence picking the odd one out ( 5 in this case).
*/

/* A better explanation why this technique works-

Let's say we have an array - [2,1,4,5,2,4,1].
What we are doing is essentially this-

=> 0 ^ 2 ^ 1 ^ 4 ^ 5 ^ 2 ^ 4 ^ 1

=> 0^ 2^2 ^ 1^1 ^ 4^4 ^5 (Rearranging, taking same numbers together)

=> 0 ^ 0 ^ 0 ^ 0 ^ 5

=> 0 ^ 5

=> 5 :)
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
	int num = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            num = num ^ nums[i];
        }
        return num;
    }
};
