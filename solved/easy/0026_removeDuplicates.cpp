class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // create hashmap of freq and then store all element values in result vector
        unordered_map<int, int> freq;
        for(int x: nums) {
            freq[x]++;
        }
        int count = freq.size();
        vector<int> result;
        for(auto x: freq) {
            result.push_back(x.first);
        }
        sort(result.begin(), result.end());
        //reverse(nums.begin(), nums.end());
        nums = result;
        return count;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(!n) return 0;
        int i = 0;
        for(int j = 1; j < n; j++)
        {
            if(nums[i] != nums[j])
            {
                i ++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
