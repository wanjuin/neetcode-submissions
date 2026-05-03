class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window method
        unordered_map<char, int> charIndex;
        int max_length = 0;
        int left_pointer = 0;

        for (int right_pointer = 0; right_pointer < s.length(); right_pointer++){
            if (charIndex.count(s[right_pointer]) && charIndex[s[right_pointer]] >= left_pointer){
                left_pointer = charIndex[s[right_pointer]] + 1;
            }

            charIndex[s[right_pointer]] = right_pointer;
            max_length = max(max_length, right_pointer - left_pointer + 1);
        }
        return max_length;
    }
};
