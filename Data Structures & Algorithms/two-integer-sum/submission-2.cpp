class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash Map approach
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++){
            indices[nums[i]] = i; 
        }

        for (int j = 0; j < nums.size(); j++){
            int diff = target - nums[j];
            if( (indices.find(diff) != indices.end()) && (indices[diff] != j) ){
                return {j, indices[diff]};
            }
        }

        // Brute Force Approach
        // vector<int> results;
        // int nums_len = nums.size();
        // for(int i = 0; i < nums_len-1; i++){
        //     for(int j = i+1; j < nums_len; j++){
        //         if (nums[i]+nums[j]==target){
        //             results.push_back(i);
        //             results.push_back(j);
        //             return results; // return {i, j}
        //         }
        //     }
        // }
        // return {};
    }
};
