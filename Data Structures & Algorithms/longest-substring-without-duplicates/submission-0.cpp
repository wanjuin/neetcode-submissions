class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       // Brute Force Solution
       int max_length = 0;

       for (int i = 0; i < s.length(); i++){
            unordered_set<char> seen;

            for (int j = i; j < s.length(); j++){
                if (seen.count(s[j])) break; // duplicate found
                seen.insert(s[j]);
                max_length = max(max_length, j - i + 1);
            }
       }

       return max_length;
    }
};
