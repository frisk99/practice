class Solution {
public:
    const int MOD = 1e9+7;
    typedef long long ll;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        ll res;
        int  max_h = horizontalCuts[0] , max_w=verticalCuts[0];
        for(int i=0;i<horizontalCuts.size() -1 ;i++){
            if( horizontalCuts[i+1] - horizontalCuts[i] > max_h){
                max_h=horizontalCuts[i+1] - horizontalCuts[i];
            }
        }
        for(int i=0;i<verticalCuts.size()-1;i++){
            if(verticalCuts[i+1] - verticalCuts[i] > max_w){
                max_w = verticalCuts[i+1] - verticalCuts[i];
            }
        }
        res =   ll ( 1LL *max_h * max_w) % MOD;// 1LL 1longlong 1ll ·ÀÖ¹Òç³ö
        return res;
    }
};
