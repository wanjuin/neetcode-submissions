class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int result_len = nums.size() - k + 1;
        vector<int> result;

        int r = k-1;
        for (int l = 0; l < result_len; l++){
            auto max_num_it = max_element(nums.begin() + l, nums.begin() + r + 1);
            if (max_num_it != nums.begin() + r + 1){
                result.push_back(*max_num_it);
            }
            r++;
        }
        return result;
    }
};
