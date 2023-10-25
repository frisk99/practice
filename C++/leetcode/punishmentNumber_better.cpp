class Solution {
public:
    int flag=0;
    int dp[1001];

    bool valid(int s, int n) {
        if (s < n) return false;
        if (s == n) return true;
        for (int base = 10; base <= s; base *= 10) {
            if (valid(s / base, n - s % base)) return true;
        }
        return false;
    }

int punishmentNumber(int n) {
    dp[1]=1;
    if(dp[n] >  0) return dp[n];
    return dp[n] = punishmentNumber(n - 1) + (valid(n * n, n) ? n * n : 0);
}
};
