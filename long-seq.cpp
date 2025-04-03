class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int longest = 0;

        for (int num : nums) {
            if (mp.find(num) == mp.end()) {  
                int left = mp.count(num - 1) ? mp[num - 1] : 0;
                int right = mp.count(num + 1) ? mp[num + 1] : 0;
                int streak = left + right + 1;

                mp[num] = streak;
                mp[num - left] = streak;  
                mp[num + right] = streak; 

                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
