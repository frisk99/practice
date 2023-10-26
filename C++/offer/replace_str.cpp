#include <algorithm>
class Solution {
public:
    string replaceSpace(string s) {
        // write code here
        string res = "";
        for(int i=0;i<s.length();i++){
            if(s[i] ==' ')res+="%20";
            else res += s[i];
        }
        return res;
    }
};
