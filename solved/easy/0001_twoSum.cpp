// brute force

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> result;
        for(int i =0; i <= nums.size()-1; i++) {
            for(int j = i+1; j <= nums.size()-1; j++) {
                if(nums[i] + nums [j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    // cout << i << j;
                    break;
                }
            }
        }


        return result;
    }
};


class Solution {
public:
    vector<int>
twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};


#include <unordered_map>
using std::unordered_map;
using std::pair;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoInts;
        unordered_map<int, int> prevMap; // map number to index
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int searching = target - num;
            auto it = prevMap.find(searching);
            if (it != prevMap.end()) {
                twoInts.push_back(i);
                twoInts.push_back(it->second);
                break;
            } else {
                pair<int,int> element(num, i);
                prevMap.insert(element);
            }
        }
        return twoInts;
    }
};
