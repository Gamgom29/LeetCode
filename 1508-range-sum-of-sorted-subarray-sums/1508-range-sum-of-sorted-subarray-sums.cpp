class Solution {
public:
    long long rangeSum(vector<int>& v, int n, int l, int r) {
    int mod = 1e9+7;
    vector<long long>pfx;
    for (int i = 0; i < n; ++i) {
        long long sum = v[i];
        pfx.push_back(v[i]);
        for (int j = i+1; j <  n ; ++j) {
            sum+=v[j];
             pfx.push_back(sum);
        }
    }
    sort(pfx.begin() , pfx.end());
    for(int i = 1 ; i < pfx.size() ; i++ ) pfx[i]= (pfx[i] + pfx[i-1]) % mod;

     return pfx[r - 1] - (l == 1 ? 0 : pfx[l-2]);
    }
};