import math


class Solution:
    def soupServings(self, n: int) -> float:
        n = min(200, math.ceil(n / 25))
        dp = [[0] * (n + 10) for _ in range(n + 10)]
        dp[0][0] = 0.5
        for j in range(1, n + 10):
            dp[0][j] = 1
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                a, b = dp[max(i - 4, 0)][j], dp[max(i - 3, 0)][max(j - 1, 0)]
                c, d = dp[max(i - 2, 0)][max(j - 2, 0)], dp[max(i - 1, 0)][max(j - 3, 0)]
                dp[i][j] = 0.25 * (a + b + c + d)
        return dp[n][n]

