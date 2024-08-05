class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int dist = 1;
        for(int i = 0 ; i < arr.size() ; i++) mp[arr[i]]++;

        for(int i = 0 ; i < arr.size() ; i++) 
            if(mp[arr[i]] == 1 && dist == k) 
                return arr[i];
            else if(mp[arr[i]] == 1) dist++;
        return "";
    }
};