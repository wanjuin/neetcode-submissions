#include<string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for (const string& str: strs){
            string s = to_string(str.size()) + "#" + str;
            encoded_string += s;
        }
        return encoded_string;

        // string encoded_string;
        // string delimiter = "_*_";

        // for (auto str: strs){
        //     encoded_string.append(str + delimiter);
        // }
        // return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> results;
        
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            i = j + 1;

            results.push_back(s.substr(i, length));
            i = i + length;
        }

        return results;
        // vector<string> results;
        // string delimiter = "_*_";
        // auto pos = s.find(delimiter);
        // while(pos != string::npos){
        //     results.push_back(s.substr(0, pos));
        //     s.erase(0, pos + delimiter.length());
        //     pos = s.find(delimiter);
        // }

        // return results;
    }
};
