#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a =4 , b=4;
	float  a1= a , b1=b;
	float k1 ,k2;
	k1= 2* a /3 - b /3;
	k2= 2* b /3 - a /3;
	if( k1 - round(k1) > 1e-9 && k2 -round(k2) > 1e-9) cout<<"yes"<<endl;
	cout<< k1 <<" "<< k2 <<endl; 
	return 0;
} 
