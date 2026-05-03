class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // O(n^3) solution
        // if (nums.empty()) return 0;
        // int longest = 0;
        // for (int num: nums){
        //     int current = num;
        //     int streak = 1;

        //     // Check if next consecutive number exists = O(n) linear scan
        //     while (find(nums.begin(), nums.end(), current+1) != nums.end()){
        //         current++;
        //         streak++;
        //     }

        //     longest = max(longest,streak);
        // }
        // return longest;

        // O(n) solution
        if (nums.empty()) return 0;

        // Insert all elements into hash set - O(n), gives O(1) avg lookup
        unordered_set<int> num_set(nums.begin(), nums.end());
        
        int longest = 0;

        for (int num: num_set){
            // Only start counting from the leftmost element of a sequence
            if (num_set.find(num-1) == num_set.end()){
                int current = num;
                int streak = 1;

                while (num_set.count(current+1)){
                    current++;
                    streak++;
                }
                longest = max(longest, streak);

            }
        }
        return longest;

    }
};
