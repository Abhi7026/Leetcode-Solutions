class Solution {
	vector<int> v;
	int n;
public:

	Solution(vector<int>& nums) {
		v = nums;
		n = v.size();
	}
	
	vector<int> reset() {
		return v;
	}
	
	vector<int> shuffle() {
			vector<int> shuffled = v;
			
			int leftSize = n;
			for(int i = n-1; i>=0; i--) {
				int j = rand()%leftSize;
				
				swap(shuffled[i], shuffled[j]);
				leftSize--;
			}
			return shuffled;
	}
	
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */