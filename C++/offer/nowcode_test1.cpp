#include<iostream>
#include<vector>
#include <functional>
using namespace std;
void work(int n){
	vector<int> path;
	int res = 0;
	function<void (int,int )>  dfs= [&](int u,int v){
	if(u > n) return ;
	if(u==n){
		if(path.size() >1 ){
		res++;
		for(auto p : path) cout<< p << "  ";
		cout<<endl;
		}
		return;
	}
	for(int i =v+1;i <n ; i++){
		if(i+u >n) break;
		path.push_back(i);
		dfs( u+i,i);
		path.pop_back();
		}     
	};
	dfs(0,0);
	cout<< res<<endl;
	return ;
}
int main(){
	int n;
	cin>>n;
	work(n);
	vector<vector<int>> dp(n,vector<int>(n,0) );

	
	return 0;
} 
