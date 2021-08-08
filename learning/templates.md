https://www.geeksforgeeks.org/fast-io-for-competitive-programming/#:~:text=ios_base%3A%3Async_with_stdio(false)%3B,first%20input%20or%20output%20operation.



So your template for competitive programming could look like this:

```c
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
```

```cpp
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp_result = 0, result = 0;
        for(int i = 0; i < gain.size(); ++i) {
            temp_result += gain[i];
            if(temp_result > result)
                result = temp_result;
        }
        
        return result;
    }
};
```

// inside function
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
