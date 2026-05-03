class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 2, 20, 4, 10, 3, 4, 5
        // when see 2, check if there exists 1.
        // if 1 does not exists, 2 is the starting point
        // start counting the length from 2 and find if there is a 3

        unordered_set<int> nums_set (nums.begin(), nums.end());
        int longest_sequence = 0;

        for(int num: nums){
            int current = num;
            int prev = current - 1;
            int count = 1;

            // if prev does not exists, it means current is the starting point
            if (nums_set.find(prev) == nums_set.end()){
                current++;
                while (nums_set.find(current) != nums_set.end()){
                    count++;
                    current++;
                }
            }

            longest_sequence = max(longest_sequence, count);
        }
        return longest_sequence;

    }
};
