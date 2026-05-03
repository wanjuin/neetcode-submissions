class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        int nums_len = nums.size();
        for(int i = 0; i < nums_len-1; i++){
            for(int j = i+1; j < nums_len; j++){
                if (nums[i]+nums[j]==target){
                    results.push_back(i);
                    results.push_back(j);
                    return results;
                }
            }
        }
    }
};
