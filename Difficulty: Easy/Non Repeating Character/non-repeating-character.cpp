
class Solution {
  public:
  const int CHAR = 256;
    char nonRepeatingChar(string &s) {
        //  code here
        int st[CHAR] = {0};
        
        for(int i = 0 ; i<s.length() ; i++){
            st[s[i]]++;
        }
        
        for(int i = 0 ; i<s.length(); i++){
            if(st[s[i]] == 1) return s[i];
        }
        return '$';
    }
};