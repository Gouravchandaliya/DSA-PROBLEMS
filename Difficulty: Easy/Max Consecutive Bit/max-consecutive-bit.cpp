class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
       int maxi = 0;
       int n = arr.size();
       int count = 0;
       for(int i =0; i<n; i++){
           if(arr[i] == 0){
               count++;
               if(arr[i+1] != 0 || (i+1)>(n-1)){
                   maxi = max(maxi, count);
                   count = 0;
               }
           }else if(arr[i] == 1){
               count++;
               if(arr[i+1] != 1 || (i+1)>(n-1)){
                   maxi = max(maxi, count);
                   count = 0;
               }
           }
       }
       return maxi;
    }
};