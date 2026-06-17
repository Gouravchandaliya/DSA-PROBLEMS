class Solution {
	public:
	vector<int> productExceptSelf(vector<int>& arr) {
		// code here
		
		vector<int>pre;
		vector<int>pos;
		int n = arr.size();
		int x = 1;
		pre.push_back(1);
		for (int i = 0; i<arr.size() - 1; i++)
			{
			x = x*arr[i];
			pre.push_back(x);
		}
		x = 1;
		pos.push_back(1);
		for (int i = arr.size() - 1; i>0; i--)
			{
			x = x*arr[i];
			pos.push_back(x);
		}
		reverse(pos.begin(), pos.end());
		
		for (int i = 0; i<pos.size(); i++)
			{
			    arr[i] = pre[i]*pos[i];
		    }
		    return arr;
		
	}
};
