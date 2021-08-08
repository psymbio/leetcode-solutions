// brute force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
	int max = 0;
        for(int i = 0; i < prices.size(); i++) {
            for(int j = i+1; j < prices.size(); j++) {
                if(max < prices[j]- prices[i])
                    max = prices[j]- prices[i];
            }
        }

	return max;
    }
};

// another solution
// sort and store indexes and then compare max differences until one is found where the index of the smallest price to the largest price is smaller.
//
//

// best solution
//


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
	int maxprofit = 0;
        int minprice = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice) {
                minprice = prices[i];
            } else if (prices[i] - minprice > maxprofit) {
                maxprofit = prices[i] - minprice;
            }
        }
        return maxprofit;
    }
};

//even better
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int minLeft = prices[0];
        int ret = 0;
        
        for(int i = 0; i < prices.size(); i++) {
            minLeft = min(minLeft, prices[i]);
            
            ret = max(ret, prices[i] - minLeft);
        }
        
        return ret;
    }
};
