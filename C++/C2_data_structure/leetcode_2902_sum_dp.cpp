##2902. 和带限制的子多重集合的数目

class Solution {
public:
    const int N = 20010, MOD = 1e9 + 7;

    int countSubMultisets(vector<int>& nums, int l, int r) {
        vector<int> cnt(N), f(r + 1), g(r + 1);
        for (auto x: nums) cnt[x] ++ ;
        f[0] = 1;
        for (int i = 1; i < N; i ++ ) {
            if (!cnt[i]) continue;
            for (int j = 0; j <= r; j ++ ) g[j] = 0;
            for (int j = 0; j <= r; j ++ ) {
                g[j] = f[j];
                if (j >= i) g[j] = (g[j] + g[j - i]) % MOD;
            }
            for (int j = 0; j <= r; j ++ ) {
                f[j] = g[j];
                if (j >= (cnt[i] + 1) * i) {
                    f[j] = (f[j] - g[j - (cnt[i] + 1) * i]) % MOD;
                }
            }
        }

        int res = 0;
        for (int i = l; i <= r; i ++ )
            res = (res + f[i]) % MOD;
        res = res * (cnt[0] + 1ll) % MOD;
        res = (res + MOD) % MOD;
        return res;
    }
};
