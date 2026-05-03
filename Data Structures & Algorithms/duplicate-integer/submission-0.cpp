class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> counts;
        for (int n: nums){
            counts[n]++;
        }
        for (auto& c: counts){
            if (c.second > 1){
                return true;
            }
        }
        return false;
    }
};