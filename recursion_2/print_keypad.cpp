#include<iostream>
#include<vector>
using namespace std;
vector<string> printkeypad(string str,string *s,int n){
	if(n==0){
		vector<string> b;
		b.push_back("");
		return b;
	}
	char ch=str[0];
	str=str.substr(1,n-1);
	vector<string> v1=printkeypad(str,s,n-1);
	vector<string> v2;
	vector<string>::iterator itrr;
	for(itrr=v1.begin();itrr!=v1.end();itrr++)
	{
		char code=ch-'0';
		string ss=s[code];
		for(int i=0;i<3;i++){
			v2.push_back(*itrr+ss[i]);
		}
	}
	return v2;
}
int main(){
	string str="673";
	string s[10]={".","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
	vector<string> v3;
	v3=printkeypad(str,s,3);
		vector<string>::iterator itr;
	for(itr=v3.begin();itr!=v3.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
