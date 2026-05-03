#include <array>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto n: nums){
            freq[n]++;
        }

        vector<pair<int, int>> freq_vec (freq.begin(), freq.end());
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        });

        vector<int> results;
        for (int i = 0; i < k; i++){
            results.push_back(freq_vec[i].first);
        }
        return results;
    }
};
