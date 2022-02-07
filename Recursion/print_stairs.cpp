#include<iostream>
#include<vector>
using namespace std;
vector<string> getstair(int n){
	if(n==0)
	{
		vector<string> p;
		p.push_back("");
		return p;
	}
	if(n<0)
	{
		vector<string> pp;
		return pp;
	}
	vector<string>p1=getstair(n-1);
	vector<string>p2=getstair(n-2);
	vector<string>p3=getstair(n-3);
	vector<string> p;
	vector<string>::iterator itr;
	for(itr=p1.begin();itr!=p1.end();itr++)
	{
		p.push_back(*itr+"1");
	}
	vector<string>::iterator iitr;
	for(iitr=p2.begin();iitr!=p2.end();iitr++)
	{
		p.push_back(*iitr+"2");
	}
	vector<string>::iterator iiitr;
	for(iiitr=p3.begin();iiitr!=p3.end();iiitr++)
	{
		p.push_back(*iiitr+"3");
	}
	return p;
}
int main(){
	int n;
	cout<<"enter floor ";
	cin>>n;
	vector<string> k;
	k=getstair(n);
	cout<<"printing stair-path ";
	vector<string>::iterator it;
	for(it=k.begin();it!=k.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
