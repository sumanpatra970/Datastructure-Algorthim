#include<iostream>
#include<vector>
using namespace std;
vector<string> printstairpath(int n){
	if(n==0){
		vector<string> b;
		b.push_back("");
		return b;
	}
	if(n<0){
		vector<string> c;
		return c;
	}
	vector<string> v1=printstairpath(n-1);
	vector<string> v2=printstairpath(n-2);
	vector<string> v3=printstairpath(n-3);
	vector<string> v4;
	vector<string>::iterator itrr;
	vector<string>::iterator itr;
	vector<string>::iterator itre;
	for(itr=v1.begin();itr!=v1.end();itr++)
	{
		v4.push_back(*itr+"1");
	}
	for(itrr=v2.begin();itrr!=v2.end();itrr++)
	{
		v4.push_back(*itrr+"2");
	}
	for(itre=v3.begin();itre!=v3.end();itre++)
	{
		v4.push_back(*itre+"3");
	}
	return v4;
}

int main(){
	int n;
	cout<<"enter max floor no";
	cin>>n;
	vector<string> v;
	v=printstairpath(n);
	vector<string>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
