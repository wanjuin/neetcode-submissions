class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Time Complexity = O(n), Space Complexity O(1)
        // int* start = &numbers.front();
        // int* end = &numbers.back();

        // int start_idx = 1;
        // int end_idx = numbers.size();

        // vector<int> result;
        // while (start < end){
        //     int sum = *start + *end;

        //     if (sum > target){
        //         end_idx--;
        //         end--;
        //     }
        //     else if (sum < target){
        //         start_idx++;
        //         start++;
        //     }
        //     else if (sum == target){
        //         result.push_back(start_idx);
        //         result.push_back(end_idx);
        //         return result;
        //     }
        // }
        // return {};

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right){
            int sum = numbers[left] + numbers[right];
            if (sum > target){
                right--;
            }
            else if (sum < target){
                left++;
            }
            else if (sum == target){
                return {left+1, right+1};
            }
        }
        return {};
    }
};
