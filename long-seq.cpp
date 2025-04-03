class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numMp(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numMp) {
            if (!numMp.count(num - 1)) { 
                int cNum = num;
                int sk = 1;
                while (numMp.count(cNum + 1)) {
                    cNum++;
                    sk++;
                }
                longest = max(longest, sk);
             }
        }
        return longest;
    }
};
