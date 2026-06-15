

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maxi = 0;
        vector<int>vec;
        for(int i = arr.size()-1; i>=0; i--){
            if(maxi<=arr[i]){
                vec.insert(vec.begin(), arr[i]);
                maxi=arr[i];
            }
        }
        return vec;
    }
};