class Solution {
    void solve(int idx, vector<int>& arr, vector<vector<int>>& ans) {
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);      // choose
            solve(idx + 1, arr, ans);   // explore
            swap(arr[idx], arr[i]);      // backtrack
        }
    }

  public:
    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>> ans;
        solve(0, arr, ans);
        return ans;        
    }
};