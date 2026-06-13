class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        
        int n = arr.size();
        d=d%n;
        vector<int> arr1(n); 
        for(int i=0; i<n; i++){
            arr1[i] = arr[(i+d)%n];
        }
        for(int i=0; i<n; i++) {
            arr[i] = arr1[i];
        }
    }
};