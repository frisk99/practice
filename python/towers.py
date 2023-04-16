import math
from typing import *


class Solution:
    def bestCoordinate(self, towers: List[List[int]], radius: int) -> List[int]:
        max=-1
        ans=[0,0]
        for i in range(51):
            for j in range(51):
                tmp=0
                for tower in towers:
                    d = ((tower[0] - i) ** 2 + (tower[1] - j) ** 2) ** 0.5
                    if d <= radius:
                        tmp+=math.floor(tower[3]/(1+d))

                if(tmp>max):
                    max=tmp
                    ans=[i,j]

        return ans
