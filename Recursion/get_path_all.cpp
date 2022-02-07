//program to print all path in a maze
#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> pathall(int sr,int sc,int dr,int dc){
	if(dr==sr && dc==sc)
	{
		vector<string> b;
		b.push_back("");
		return b;
	}
	vector<string> p;
	for(int sm=1;sm<=dc-sc;sm++)
	{
		vector<string> s;
		s=pathall(sr,sc+sm,dr,dc);
		vector<string>:: iterator itr1;
		for(itr1=s.begin();itr1!=s.end();itr1++)
		{
		 	p.push_back("h"+*itr1);
		}
	}
	for(int sm=1;sm<=dr-sr;sm++)
	{
		vector<string> s2;
		s2=pathall(sr+sm,sc,dr,dc);
		vector<string>:: iterator itr2;
		for(itr2=s2.begin();itr2!=s2.end();itr2++)
		{
		 	p.push_back("v"+*itr2);
		}
	}
	for(int sm=1;sm<=dr-sr && sm<=dr-sr;sm++)
	{
		vector<string> s3;
		s3=pathall(sr+sm,sc+sm,dr,dc);
		vector<string>:: iterator itr3;
		for(itr3=s3.begin();itr3!=s3.end();itr3++)
		{
		 	p.push_back("d"+*itr3);
		}
	}
	return p;
}
int main(){
	int sr=1;
	int sc=1;
	int dr=3;
	int dc=3;
	vector<string> v;
	v=pathall(sr,sc,dr,dc);
	vector<string>:: iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
