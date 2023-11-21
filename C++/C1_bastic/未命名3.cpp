#include<iostream>
#include<cstring>
#include <functional>
using namespace std;
const int N  = 10;
int path[N],u[N], n;
int main(){
    memset( u , 0 , sizeof(u));
    memset( path , 0 , sizeof(path));
    cin>> n ;
    function< void (int )> dfs = [&](int a){
        if( a== n){
            for(int i = 0 ; i< n; i++){
                printf("%d ",path[i]);
            }
        	puts("");
        }
        for(int i=1 ; i <= n ;i++){
            if( u[i] == 0){
                path[a]=i;
                u[i]=1;
                dfs(a+1);
                u[i]=0;
                path[a] =0;
            }
        }
    };
    dfs(0);
    return 0;
}
