class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int s=0;
        int e=arr.size()-1;
        int mid = s+(e-s)/2;
       while(s<=e){
           if(k==arr[mid]) return true;
           else if(k<arr[mid]){
               e = mid-1;
           }else{
               s=mid+1;
           }
            mid = s+(e-s)/2;
       }
        return false;
    }
};