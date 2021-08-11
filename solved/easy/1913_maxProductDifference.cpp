#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        sort(nums.begin(), nums.end(), greater<int>());
        int result = (nums[0]*nums[1]) -  (nums[nums.size()-1]*nums[nums.size()-2]);
        return result;
    }
};


// O(N)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = numeric_limits<int>::min();
        int max2 = numeric_limits<int>::min();
        int min1 = numeric_limits<int>::max();
        int min2 = numeric_limits<int>::max();
        for (auto n : nums) {
            if (n > max1) {
                max2 = max1;
                max1 = n;
            } else if (n > max2) {
                max2 = n;
            }
            if (n < min1) {
                min2 = min1;
                min1 = n;
            } else if (n < min2) {
                min2 = n;
            }
        }
        int result = max1 * max2 - min1 * min2;
        return result;
    }
};

// we aren't thinking this way but we should be 
