class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
    
        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> freqList;
        for (auto it : freq) {
            freqList.push_back(it);
        }

    //Sort the vector
        sort(freqList.begin(), freqList.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freqList[i].first);
        }

        return result;
    }
};
