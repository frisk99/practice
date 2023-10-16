#include<iostream>
#include<vector>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	vector<int> fa(n+1,0);
	fa[1]=0;
	for(int i =2;i<=n;i++){
		fa[i]= (fa[i-1] + m) % i; 
	}
	cout<<fa[n] +1<<endl;
	return 0;
}
