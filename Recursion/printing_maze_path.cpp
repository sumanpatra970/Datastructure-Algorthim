//program to print all maze path without storing
#include<iostream>
using namespace std;
void getmazepath(int sr,int sc,int dr,int dc,string op){
	if(sr==dr && sc==dc)
	{
		cout<<op<<" ";
	}
	if(sr<dr)
	{
		getmazepath(sr+1,sc,dr,dc,op+"h");
	}
	if(sc<dc)
	{
		getmazepath(sr,sc+1,dr,dc,op+"v");
	}
}
int main(){
	int sr,sc,dc,dr;
	sr=1;
	sc=1;
	dc=3;
	dr=3;
	getmazepath(sr,sc,dr,dc,"");
	return 0;
}
