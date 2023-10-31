#include<iostream>
using namespace std;

bool isNumeric(string str) {
        int n = str.size();
        int idx =0;
        int flag =0;
		label:
        switch (flag) {
            case 0:   	
            if(idx == n) break;
            if(str[idx] == ' '){
                flag =0;
            }else if(str[idx] == '+' || str[idx] == '-') flag =1;
            else if( str[idx] >='0' && str[idx] <='9' ) flag =3;
            else if(str[idx] == '.') flag =4;
            else{
                flag=10;
            }
            idx++;
            goto label;
            case 1:
            if(idx==n)break;
            if(str[idx] >='0' && str[idx] <='9') flag=3;
            else if(str[idx] == '.') flag=4;
            else{
                flag=10;
            }
            idx++;
            goto label;
            case 3:
            if(idx==n) break;
            if(char(str[idx])>='0' && char(str[idx])<='9') flag=3;
            else if(str[idx] =='e' || str[idx] == 'E') flag =7;
            else if(str[idx] == '.'){
            	flag=6;
			}
            else if(str[idx] == ' ') flag =9;
            else{
                flag=10;
            }
            idx++;
            goto label;
            case 4:
            if(idx ==n) break;
            if(str[idx] >='0' && str[idx] <='9') flag =5;
            else{
                flag =10;
            }
            idx++;
            goto label;
            case 5:
            if(idx ==n) break;
            if(str[idx] == 'e' || str[idx] =='E') flag=7;
            else if(str[idx] ==' ')flag =9;
            else{
                flag =10;
            }
            idx++;
            goto label;
            case 6:
            if(idx ==n)break;
            if( char(str[idx]) >= '0' && char(str[idx])<= '9') flag=6;
            else if(str[idx] ==' ')flag =9;
            else if(str[idx] == 'e' || str[idx] == 'E')flag =7;
            else{
                flag=10;
            }
            idx++;
            goto label;
            case 7:
            if(idx==n)break; 
            if(str[idx] >='0' &&str[idx] <='9') flag=8;
            else if(str[idx] == '+' || str[idx] =='-')flag =11;
            else{
                flag=10;
            } 
            idx++;
            goto label;
            case 8:
            if(idx ==n)break;
            if(str[idx] >='0' &&str[idx] <='9') flag=8;
            else if(str[idx] ==' ') flag=9;
            else {
                flag =10;
            }
            idx++;
            goto label;
            case 9:
            if(idx==n) break;
            if(str[idx] ==' ') flag=9;
            else{
                flag =10;
            }
            idx++;
            goto label;
            case 10:
            break;
            case 11:
            if(idx ==n) break;
            if(str[idx] >='0' &&str[idx] <='9') flag =8;
            else{
                flag =10;
            }
            idx++;
            goto label;

        }
        cout<<flag<<endl;
        if(flag ==6 || flag ==9 || flag == 8 || flag ==3 ||flag ==5) return true;
        else return false;
    }
int main(){
	bool res =isNumeric(" 1 ");
	if(res)cout<<"yes"<<endl;
	return 0;
}
