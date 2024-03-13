#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int found_at=0;
        string curr = "";
        for (int i=0; i<s.length(); i++) {
            found_at = curr.rfind(s[i]);
            if (found_at < s.length())
                curr = curr.substr(found_at+1,i-found_at);
            curr += s[i];
            result = (result > curr.length()) ? result : curr.length();
        }
        return result;
    }
};