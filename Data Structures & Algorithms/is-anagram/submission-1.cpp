class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> count_map;
        for (char c: s){
            count_map[c]++;
        }

        for (char c: t){
            if (count_map.find(c) == count_map.end() || count_map[c] == 0){
                return false;
            }
            count_map[c]--;
        }
        return true;

        // First Attempt
        // unordered_map<char, int> count_s_char;
        // unordered_map<char, int> count_t_char;

        // for(char s_char: s){
        //     count_s_char[s_char]++;
        // }
        // for (char t_char: t){
        //     count_t_char[t_char]++;
        // }
        // if (count_s_char == count_t_char){
        //     return true;
        // }
        // return false;
    }
};
