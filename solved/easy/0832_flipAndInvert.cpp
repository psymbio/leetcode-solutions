#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<vector<int>> flipped = image;
        for(int i = 0; i <= image.size()-1; i++) {
            reverse(image[i].begin(), image[i].end());
            for(int j = 0; j <= image[i].size()-1; j++) {
                flipped[i][j] = (image[i][j] == 0) ? 1 : 0;
            }
        }
        
        return flipped;
    }
};

// don't get why you have to reverse 
//
//
//
//



class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        //cout<<n;
        int n;
        for(int i=0;i<image.size();i++){
            n=image[i].size();
            for(int j=0;j<n/2;j++){
                int temp=image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
        }
       
        for(int i=0;i<image.size();i++){
            n=image[i].size();
            for(int j=0;j<n;j++){
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;
            }
        }
         return image;
    }
};


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++) {
            int low = 0;
            int high = image[i].size()-1;
            
            while(low <= high) {
                if(image[i][low] == image[i][high]) {
                    image[i][low] = 1 - image[i][low];
                    image[i][high] = image[i][low];
                }
                low++;
                high--;
            }
        }
        return image;
    }
};
