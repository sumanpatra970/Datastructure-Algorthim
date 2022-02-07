//program to print all stairpaths without storing
#include<iostream>
#include<vector>
using namespace std;
void printstairpath(string op,int n){
	if(n<0)
	{
		return ;
	}
	if(n==0)
	{
		cout<<op<<" ";
		return ;
	}
	printstairpath(op+"1",n-1);
	printstairpath(op+"2",n-2);
	return ;
}
int main(){
	int n=3;
	string op="";
	printstairpath(op,n);
	return 0;
}
