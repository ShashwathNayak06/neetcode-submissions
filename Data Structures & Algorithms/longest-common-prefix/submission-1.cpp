class Solution {
public:



    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res = strs[0];
        for(int i = 1;i < n;i++) {
            for(int j = 0;j < res.size();j++) {
                string temp = strs[i];
                if(temp[j] != res[j]){
                    res = res.substr(0,j);
                } 
            }
        }
        return res;
    }
};