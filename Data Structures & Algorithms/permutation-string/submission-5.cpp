class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> count1(26,0);
        vector<int> count2(26,0);
         
        for (int i = 0; i < s2.size(); i++){
            if (i < s1.size()){
                count1[s1[i] - 'a']++;
                count2[s2[i] - 'a']++;
            } else {
                count2[s2[i-s1.size()] - 'a']--;
                count2[s2[i] - 'a']++;
            }

            if (i >= s1.size()-1 && count1 == count2) return true;
        }
        return false;
    }
};
