class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==2)
        return true;
        int mx = INT_MIN;
        for(int i = 0 ; i < n-2 ; i ++){
            mx = max(mx , nums[i]);
            if(mx > nums[i+2])
            return false;
        }
        return true;
    }
};