#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int a ,b ,tmp;
	cin >> a >> b;
	if( a < b){
		swap(a,b);
	}
	int res = 0;
	while( a && b  ){
		 a =  a - b;
		 swap(a,b);
		 res ++;
	}
	cout<< res << endl;
	return 0;
} 
