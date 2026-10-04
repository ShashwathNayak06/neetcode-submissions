
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int m;

        for(int i = 0;i < nums.size();i++) {
            m = target - nums[i];
            if(mpp.find(m) != mpp.end()) return {mpp[m],i};
            mpp[nums[i]] = i;
        }

        return {-1,-1};
    }
};
