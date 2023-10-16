#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string s ;
	getline(cin,s);
	size_t pos =0;
	vector<size_t> xiao;
	vector<size_t> mi;
	while(  ( pos =s.find("xiao" ,pos)) != string::npos){
		xiao.push_back(pos);
		pos++;
	}
	pos=0;
	while(  ( pos =s.find("mi" ,pos)) != string::npos){
		mi.push_back(pos);
		pos++;
	}
	int res=0;
	int mi_size= mi.size();
	for(int i=0;i<xiao.size();i++){
		for(int j=0;j<mi_size;j++){
			if(xiao[i] < mi[j]){
				res=res+ (mi_size -j);
				break;
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
