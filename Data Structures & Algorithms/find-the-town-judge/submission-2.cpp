class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> mpp;
        set<int> done;

        for(int i = 0;i < trust.size();i++) {
            mpp[trust[i][1]]++;
            done.insert(trust[i][0]);
        }

        for(auto x : mpp) {
            if(x.second == n-1 && done.find(x.first) == done.end()) return x.first;
        }
        return -1;
    }
};