class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;

        for(int i = 0;i< nums.size();i++) {
            mpp[nums[i]]++;
        }
        int res = 0;
        int n = 0;
        for(auto x : mpp) {
            if(x.second > n) {
                res = x.first;
                n = x.second;
            }
        }

        return res;
    }
};