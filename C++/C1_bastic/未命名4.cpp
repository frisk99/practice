#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        int n  = values.size();
        vector<vector<int>> g(n);
        for(auto &edge : edges){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        vector<vector<ll>>  dp(n,vector<ll>(2,-1));
        function<ll (int ,int ,int)> dfs = [&](int u, int p ,int f){
            if(dp[u][f] > -1) return dp[u][f];
            ll res =values[u];
            int cnt =0;
            for(auto  v : g[u]){
                if(v!= p){
                    res +=dfs(v,u,f);
                    cnt++;
                }
            }
            if(f==1) dp[u][f] =  res;
            else{
                if(cnt==0) res =0;  //????????f0??????????????
                ll res1= 0;
                for(auto v : g[u]){
                    if(v!=p)
                    res1 += dfs(v,u,1);
                }
                dp[u][f]=max(res,res1);
            }
            return dp[u][f];
        };
        dfs(0,-1,0);
        return dp[0][0];
        

    }
int main(){
	return 0;

}

