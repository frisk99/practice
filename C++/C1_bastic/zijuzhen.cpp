#include<iostream>
using namespace std;
const int N= 1010;
int a[N][N] , s[N][N];
int n,m,q;
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		s[i][j]= s[i-1][j]+ s[i][j-1] -s[i-1][j-1]+ a[i][j];
	}
	while(q--){
		int tmp,x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		//���ľ��Ǽ�1 �� Ϊʲô����1 ��Ϊ������ x1 y1�Ǹ��� 
		tmp= s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
		cout<<tmp<<endl; 
	}
	return 0;
}
