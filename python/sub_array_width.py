from typing import *


class Solution:
    def sumSubseqWidths(self, nums: List[int]) -> int:
        nums.sort()
        MOD = 10 ** 9 + 7
        length = len(nums)
        pows = [0] * length
        pows[0] = 1
        for i in range(1, length):
            pows[i] = (pows[i - 1] * 2) % MOD
        for i, num in enumerate(nums):
            sum += ((pows[i] - pows[length - i - 1]) * num) % MOD
        return sum