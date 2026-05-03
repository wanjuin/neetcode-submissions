class Solution {
public:
    bool isPalindrome(string s) {
        // Point to the first and last char of the string
        char* start = &s.front();
        char* end = &s.back();

        while (start < end){
            if (!isAlphaNumeric(*start)){
                start++;
            }
            else if (!isAlphaNumeric(*end)){
                end--;
            }
            else if (tolower(*start) != tolower(*end)){
                return false;
            }
            else {
                start++;
                end--;
            }
        }
        return true;
    }

    bool isAlphaNumeric (char ch){
        if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
            return true;
        }
        return false;
    }
};
