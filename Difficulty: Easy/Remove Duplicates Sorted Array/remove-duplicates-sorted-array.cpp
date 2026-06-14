class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        int k = 0;
        if(n==0) return arr;
        
        for(int i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                arr[k] = arr[i];
                k++;
            }
        }
        arr[k++] = arr[n-1];
        arr.resize(k);
        return arr;
    }
};