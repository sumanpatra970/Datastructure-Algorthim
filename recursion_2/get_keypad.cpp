#include<iostream>
using namespace std;
void printkeypad(string str,string op,string *s,int n){
	if(n==0){
		cout<<op<<" ";
		return ;
	}
	char ch=str[0];
	str=str.substr(1,n-1);
	char code=ch-'0';
	string ss=s[code];
	for(int i=0;i<3;i++){
		printkeypad(str,op+ss[i],s,n-1);
	}
	return ;
}
int main(){
	string str="673";
	string s[10]={".","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
	printkeypad(str,"",s,3);
	return 0;
}
