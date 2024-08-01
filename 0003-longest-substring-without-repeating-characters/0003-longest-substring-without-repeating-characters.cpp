class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int l = 0 ;
      int ans = 0 ;
      unordered_set<char> us;
      for(int i = 0 ; i < s.size() ; i++){
        while(us.find(s[i])!=us.end()){
            us.erase(s[l]);
            l++;
        }
        us.insert(s[i]);
        ans = max(ans , i - l + 1);
      }
      return ans;
    }
};