class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Time Complexity = O(n), Space Complexity O(1)

        int* start = &numbers.front();
        int* end = &numbers.back();

        int start_idx = 1;
        int end_idx = numbers.size();

        vector<int> result;
        while (start < end){
            int sum = *start + *end;

            if (sum > target){
                end_idx--;
                end--;
            }
            else if (sum < target){
                start_idx++;
                start++;
            }
            else if (sum == target){
                result.push_back(start_idx);
                result.push_back(end_idx);
                return result;
            }
        }
        return {};
    }
};
