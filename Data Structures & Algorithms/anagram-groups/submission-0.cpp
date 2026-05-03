#include <array>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<std::array<int,26>, vector<string>> groups;
        for (const string& s: strs){
            std::array<int,26> freq ={0};
            for (char c: s){
                freq[c - 'a']++;
            }
            groups[freq].push_back(s);
        }

        vector<vector<string>> results;
        results.reserve(groups.size());
        for (auto& g: groups){
            results.push_back(move(g.second));
        }

        return results;
    }
};
