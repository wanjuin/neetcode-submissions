class Solution {
public:
    bool isPalindrome(string s) {
        // Method 1: Pointer method
        // char* start = &s.front();
        // char* end = &s.back();

        // while (start < end){
        //     if (!isAlphaNumeric(*start)){
        //         start++;
        //     }
        //     else if (!isAlphaNumeric(*end)){
        //         end--;
        //     }
        //     else if (tolower(*start) != tolower(*end)){
        //         return false;
        //     }
        //     else {
        //         start++;
        //         end--;
        //     }
        // }
        // return true;

        // Method 2: Convert string from the start
        string newStr = "";
        for (char c: s){
            if (isalnum(c)){
                newStr += tolower(c);
            }
        }
        return newStr == string(newStr.rbegin(), newStr.rend());
    }

    bool isAlphaNumeric (char ch){
        if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
            return true;
        }
        return false;
    }
};
