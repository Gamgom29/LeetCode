class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        for(int i = 0 ; i < word.size() ; i++){
            mp[word[i]]++;
        }
        int res = 0 ;
        if(mp.size() <= 8){
            for(auto it : mp) res+=it.second;
        }
        else {
            vector<int>p;
            for(auto it : mp) p.push_back(it.second);
            sort(p.rbegin() , p.rend());
            for(int i = 0 ; i <p.size() ; i++) {
                if(i <= 7) res+=p[i];
                else if(i<=15) res+=p[i]*2;
                else if(i<=24) res+=p[i]*3;
                else res+=p[i]*4;
            }
        }
        return res;
    }
};