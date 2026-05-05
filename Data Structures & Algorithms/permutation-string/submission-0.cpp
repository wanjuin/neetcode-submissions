class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> count_s1(26,0), count_s2(26,0);

        // fill frequency array for s1 and first window of s2
        for(int i = 0; i < s1.size(); i++){
            count_s1[s1[i] - 'a']++;
            count_s2[s2[i] - 'a']++;
        }
        if (count_s1 == count_s2) return true;

        for (int j = s1.size(); j < s2.size(); j++){
            count_s2[s2[j] - 'a']++;
            count_s2[s2[j-s1.size()] - 'a']--;
            if (count_s1 == count_s2) return true;
        }
        return false;
    }
};
