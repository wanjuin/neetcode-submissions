class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;

        sort(nums.begin(), nums.end());
        int nums_len = nums.size();
        

        for (int i = 0; i < nums_len; i++){
            // Same anchor value as previous i → would produce duplicate triplets in output
            if (i>0 && nums[i]==nums[i-1]) continue;

            // sorted, so no triplet can sum to 0
            if (nums[i] > 0) break;

            int target = -nums[i];
            
            int left = i+1;
            int right = nums_len - 1;
            while (left < right){
                int complement = nums[left] + nums[right];
                if (complement > target){
                    right--;
                }
                else if (complement < target){
                    left++;
                }
                else {
                    results.push_back({nums[i],nums[left],nums[right]});

                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;

                    left++;
                    right--;
                }
            }
        }
        return results;
    }
};
