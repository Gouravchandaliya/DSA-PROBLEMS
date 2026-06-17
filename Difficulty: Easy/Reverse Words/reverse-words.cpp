class Solution {
  public:
    string reverseWords(string &s) {
        // code here
         string ans;
        int n=s.size();
        int last=n-1;
        while(last>=0 && s[last]=='.'){
            last--;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='.'){
                if(i+1<=last){
                    if(!ans.empty())
                    ans.push_back('.');
               for(int k=i+1;k<=last;k++){
                  ans.push_back(s[k]); 
               }
                }
               last=i-1;
            }
        }
        if(last>=0){
            if(!ans.empty())
            ans.push_back('.');
        for(int i=0;i<=last;i++){
            if(s[i]!='.')
            ans.push_back(s[i]);
        }
        }
        return ans;
    }
};