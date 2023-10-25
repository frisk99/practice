#include<iostream>
using namespace std;
const int MOD = 1e9+7;
int main(){
	int n,k,target;
	cin>>n>>k>>target;
    int  f[n+2][k+target+2];
    for(int i =1;i<=k;i++) f[1][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=target;j++){
            for(int l=1;l<=k && j>l;l++){
                f[i][j] = (f[i][j]+f[i-1][j-l]) % MOD;
            }
        }
    }
    
    cout<<f[n][target];
    
	return 0;
} 
