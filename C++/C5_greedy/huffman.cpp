#include<iostream>
#include<queue>
using namespace std;
int n;
int main(){
	cin>>n;
	priority_queue<int,vector<int> ,greater <int>> heap;
	int tmp;
	for(int i =0;i<n;i++){
		cin>>tmp;
		heap.push(tmp);
	} 
	int a,b;
    int res=0;
	for(int i=1;i<n;i++){
		a=heap.top(), heap.pop();
		b=heap.top(), heap.pop();
		heap.push(a+b);
        res+= a+b;
	}
    cout<<res<<endl;
    return 0;
}
