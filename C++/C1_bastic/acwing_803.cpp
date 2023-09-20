#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> PII;
vector<PII> A;
void merge(vector<PII> &A){
	
	int l=-1e9-10,r=-1e9-10;
	vector<PII> res;
	sort(A.begin(),A.end());
	for(auto a: A){
		if(a.first > r){
			if( r != -1e9-10) res.push_back({l,r});
			l = a.first;
			r = a.second;
		}else r= max(r,a.second); 
	}
	if(l!=-1e9-10 ) res.push_back({l,r});
	A=res;
	
	
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int l,r;
		cin>>l>>r;
		A.push_back({l,r});
	}
	merge(A);
	cout<<A.size()<<endl;
	return 0;
}
