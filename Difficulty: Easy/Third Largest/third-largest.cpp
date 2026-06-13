class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int largest = -1;
        int secondLargest = -1;
        int third = -1;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > largest){
                third = secondLargest;
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest){
                third = secondLargest;
                secondLargest = arr[i];
            }
            else if(arr[i]>third){
                third = arr[i];
            }
        }
        return third;
    }
};