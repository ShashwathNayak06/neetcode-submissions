class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int w = INT_MAX;
        int m = 0;
        for(int i = 0;i <= n-k;i++) {
            m=0;
            for(int j = i;j < i+k;j++) {
                if(blocks[j] == 'W') m++;
            }
            w = min(w,m);
        }
        return w;
    }
};