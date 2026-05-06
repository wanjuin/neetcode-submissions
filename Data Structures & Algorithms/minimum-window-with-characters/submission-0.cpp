class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char,int> window, t_freq;
        for (char c: t){
            t_freq[c]++;
        }
        
        int l = 0;
        int min_len = INT_MAX;
        int min_left = 0;

        for (int r = 0; r < s.size(); r++){
            window[s[r]]++;

            while(contains(window, t_freq)){
                if(r - l + 1 < min_len){
                    min_len = r - l + 1;
                    min_left = l;
                }
                window[s[l]]--;
                if(window[s[l]] == 0) window.erase(s[l]);
                l++;
            }
        }
        return min_len == INT_MAX? "": s.substr(min_left, min_len);
    }

    bool contains(unordered_map<char, int>& big, unordered_map<char, int>& small) {
        for (auto& [key, val]: small){
            if (big[key] < val) return false;
        }
        return true;
    }
};