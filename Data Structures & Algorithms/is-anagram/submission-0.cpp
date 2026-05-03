class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count_s_char;
        unordered_map<char, int> count_t_char;

        for(char s_char: s){
            count_s_char[s_char]++;
        }
        for (char t_char: t){
            count_t_char[t_char]++;
        }
        if (count_s_char == count_t_char){
            return true;
        }
        return false;
    }
};
