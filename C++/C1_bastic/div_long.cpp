#include<iostream>
using namespace std;
#include<vector>
#include<algorithmn>
typedef vector<int> vi;
vi div(vi &A,int b,int &c){
    vi C;
    c=0;
    while(int i=A.size()-1;i>=0;i--){
        c=c*10 + A[i];
        C.pop_back(t/c);
        t=t%b;
    }
    

}
int main(){
    string a,int b;
    cin>>a>>b;
    vi A;
    for(int i =a.size() -1 ;i>=0;i--){
        A.push_back(a[i] - '0');
    }
    int c =0;

    return 0;
}