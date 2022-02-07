//program to print all paths in maze
#include<iostream>
#include<vector>
using namespace std;
vector<string> getmazepath(int sr,int sc,int dr,int dc){
	if(sr==dr && sc==dc)
	{
		vector<string> p;
		p.push_back("");
		return p;
	}
	vector<string> hpath;
	vector<string> vpath;
	vector<string> p;
	if(sr<dr)
	{
		hpath=getmazepath(sr+1,sc,dr,dc);
	}
	if(sc<dc)
	{
		vpath=getmazepath(sr,sc+1,dr,dc);
	}
	vector<string>::iterator itrr;
	for(itrr=vpath.begin();itrr!=vpath.end();itrr++)
	{
		p.push_back(*itrr+"v");
	}
	vector<string>::iterator itr;
	for(itr=hpath.begin();itr!=hpath.end();itr++)
	{
		p.push_back(*itr+"h");
	}
	return p;
}
int main(){
	int sr,sc,dc,dr;
	sr=1;
	sc=1;
	dc=3;
	dr=3;
	vector<string> v;
	v=getmazepath(sr,sc,dr,dc);
	vector<string>:: iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
