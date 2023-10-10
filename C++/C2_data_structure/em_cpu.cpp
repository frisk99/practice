#include<iostream>
using namespace std;
#include<algorithm>
#include<cstring>
#include<sstream>
#include<queue>
#include<vector>
typedef pair<int,int> PII;

int main(){
	string line;
	getline(cin,line);
	istringstream  iss(line);
	int number;
	vector<int> nums;
	while(iss >> number){
		nums.push_back(number);
	}
	vector<int> nums2;
	getline(cin,line);
	istringstream iss2(line);
	while(iss2>>number){
		nums2.push_back(number);
	}
	int maxt=0;
	priority_queue<PII ,vector<PII>,greater<PII>> works;
	priority_queue<PII ,vector<PII>,greater<PII>> works2;
	for(int i=0;i<nums.size();i=i+2){
		works.push({nums[i] ,nums[i+1]});
		maxt = max(maxt , nums[i]+nums[i+1]);
	}
	int a=nums2[0] ,b= nums2[1];
	priority_queue<int ,vector<int>,greater<int>> cpu;
	priority_queue<PII ,vector<PII>,greater<PII>> waits; 
	auto t =works.top();
	int worksize = works.size();
	int res;
	int cnt=0;
	int flag= false;
	for(int  i=1;i<=maxt*worksize ;i++){
		while(  cpu.size() &&cpu.top() >=i){
			if( flag &&cpu.size()==1  && waits.size() ==0) res = cpu.top();
			cpu.pop();
		}
		while(t.first ==i){
			if(cpu.size() <b){
				if(t.first !=-1)
				cpu.push( t.first+ t.second);
				if(works.size()){
					works.pop();
					t = works.top();
				}else{flag =true;
				     t={-1,-1};
				}
			}
			if(cpu.size() >=b){
				if(waits.size() <a){
				if(t.first!=-1)
				waits.push({t.first,t.second});
				if(works.size()){
					works.pop();
					t = works.top();
				}
			    else{
			    	flag = true;
			    	t={-1,-1};
					}
				}else if(waits.size() >=a){
			    if(t.first!=-1){
			    while(waits.size() >=a) waits.pop();
				waits.push({t.first,t.second});
					}
				if(works.size()){
					works.pop();
					t= works.top();
				}else{
					flag = true;
					t={-1,-1};
					}
				}
			}
		}
		while ( cpu.size() < b  && waits.size() !=0 ){
				auto tt = waits.top();
				waits.pop();
				cpu.push(tt.first+tt.second);
			}
	}
	cout<<res<<" "<<cnt<<endl;
	return  0;
}
