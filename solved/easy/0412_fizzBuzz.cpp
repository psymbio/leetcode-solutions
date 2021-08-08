// remember to push back instead of result[i]
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) 
                result.push_back("FizzBuzz");  
            else if(i % 5 == 0)
                result.push_back("Buzz");
            else if(i % 3 == 0)
                result.push_back("Fizz");
            else
                result.push_back(to_string(i));    
        }
        return result;
    }
};

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s = {"FizzBuzz", "Fizz", "Buzz"};
        vector<string> ans(n, "");
        for(int i=0; i<n; i++){
            if((i+1)%3==0 && (i+1)%5==0)
                ans[i]+= s[0];
            else if((i+1)%3==0)
                ans[i]+= s[1];
            else if((i+1)%5==0)
                ans[i]+= s[2];
            else {
                int z = i+1;
                string temp="";
                while(z){
                    int m = z%10;
                    z=z/10;
                    char t1= '0'+m;
                    temp =  t1 + temp;
                    
                }
                ans[i]+= temp;
            }
        }
        return ans;
    }
};
