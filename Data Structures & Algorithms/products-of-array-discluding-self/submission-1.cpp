class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Prefix-Suffix Method
        vector<int> prefix;
        int cum_prod_pref = 1;
        for (int i = 0; i < nums.size(); i++){
            cum_prod_pref *= nums[i];
            prefix.push_back(cum_prod_pref);
        }

        
        vector<int> suffix (nums.size(), 1);
        int cum_prod_suf = 1;
        for (int j = nums.size() - 1; j >= 0; j--){
            cum_prod_suf *= nums[j];
            suffix[j] = cum_prod_suf;
        }
       
        vector<int> output (nums.size(), 1);
        for (int k = 0; k < nums.size(); k++){
            if ( k + 1 < nums.size() ){
                output[k] *= suffix[k+1];
            }
            if ( k - 1 >= 0){
                output[k] *= prefix[k-1];
            }
        }
        return output;

        // // Brute Force Approach
        // vector<int> output (nums.size(), 1);
        // for (int i = 0; i < nums.size(); i++){
        //     for (int j = 0; j < nums.size(); j++){
        //         if (i != j){
        //             output[i] *= nums[j];
        //         }
        //     }
        // }
        // return output;
    }
};
