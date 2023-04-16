from typing import  *

# class Solution:
#     def largestAltitude(self, gain: List[int]) -> int:
#         return max(accumulate(gain, initial=0))
# acc 比自己写的要快...
def largestAltitude(self, gain: List[int]) -> int:
    max = -101
    sum = 0
    for g in gain:
        sum += g
        print(sum)
        if (sum >= max):
            max = sum

    return max if max > 0 else 0
if __name__ == "__main__":
    a=largestAltitude([-5,1,5,0,-7])
