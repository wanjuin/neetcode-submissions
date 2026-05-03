class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int longest = 0;
        for (int num: nums){
            int current = num;
            int streak = 1;

            // Check if next consecutive number exists = O(n) linear scan
            while (find(nums.begin(), nums.end(), current+1) != nums.end()){
                current++;
                streak++;
            }

            longest = max(longest,streak);
        }
        return longest;
    }
};
