// User function template for C++
class Solution {
  public:

    int search(string text, string pat) {
        // Your code goes here
                bool res = false;
        
        if(text.find(pat) < text.length()){
            res = true;
        }
        return res;
    }
};