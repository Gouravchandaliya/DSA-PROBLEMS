// User function Template for C++
class Solution {
  public:
    bool areDisjoint(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int, int> freq;
        for(int i = 0; i<a.size(); i++){
            freq[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
            if(freq[b[i]]){
                return false;
            }
        }
        return true;
        
    }
};