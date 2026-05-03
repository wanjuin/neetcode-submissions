#include<string.h>

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        string delimiter = "_*_";

        for (auto str: strs){
            encoded_string.append(str + delimiter);
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> results;
        string delimiter = "_*_";
        auto pos = s.find(delimiter);
        while(pos != string::npos){
            results.push_back(s.substr(0, pos));
            s.erase(0, pos + delimiter.length());
            pos = s.find(delimiter);
        }

        return results;
    }
};
