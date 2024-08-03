class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr == target) return true;
        sort(target.begin() , target.end())
        sort(arr.begin() , arr.end());
        if(arr == target)return true;
        else return false;
    }
};