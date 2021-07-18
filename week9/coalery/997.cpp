// Time Complexity : O(N)

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> cnt1(n, 0);
        vector<int> cnt2(n, 0);
        for(int i=0; i<trust.size(); i++) {
            cnt1[trust[i][0]-1]++;
            cnt2[trust[i][1]-1]++;
        }
        for(int i=0; i<n; i++) {
            if(cnt2[i] == n-1 && cnt1[i] == 0) return i + 1;
        }
        return -1;
    }
};