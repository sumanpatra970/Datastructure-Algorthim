#include<iostream>
#include<vector>
#include <string.h>
using namespace std;
vector<string> printss(string str,int n){
	if(n==0){
		vector<string> v;
		v.push_back("");
		return v;
	}
	string sstr=str.substr(0,n-1);
	cout<<sstr<<" ";
	char ch=str[n-1];
	vector<string> s1;
	s1=printss(sstr,n-1);
	vector<string> s2;
	vector<string>::iterator itrr;
	for(itrr=s1.begin();itrr!=s1.end();itrr++)
	{
		s2.push_back(*itrr+"");
		s2.push_back(*itrr+ch);
	}
	return s2;
}
int main(){
	string str="abc";
	vector<string> v;
	v=printss(str,3);
	vector<string>:: iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
