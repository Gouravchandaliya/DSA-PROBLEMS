class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        int count = 0;
        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;
        
        for(int i=0; i<a.size(); i++){
            mp[a[i]]++;
            mp2[b[i]]++;
        }
        
        for(int i=0; i<a.size(); i++){
            if(mp[a[i]] != mp2[a[i]]){
                return false;
            }
        }
        return true;
        
    }
};