//program to calculate boolean exxpression using recursion
#include<iostream>
using namespace std;
int mcm(string s,int i,int j,bool st){
	int ans=0;
	if(i>j)
	{
		return 0;
	}
	if(i==j)
	{
		if(st==true)
		{
			if(s[i]==true)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if(s[i]==true)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	for(int k=i+1;k<j;k++)
	{
		int lf=mcm(s,i,k-1,false);
		int lt=mcm(s,i,k-1,true);
		int rt=mcm(s,k+1,j,true);
		int rf=mcm(s,k+1,j,false);
		if(s[k]=='^')
		{
			if(st==true)
			{
				ans=ans+lf*rt+rf*lt;
			}
			else
			{
				ans=ans+lf*rf+rt*lt;
			}
		}
		else if(s[k]=='|')
		{
			if(st==true)
			{
				ans=ans+lf*rt+rf*lt+lt*rt;
			}
			else
			{
				ans=ans+lf*rf;
			}
		}
		else
		{
			if(st==true)
			{
				ans=ans+lt*rt;
			}
			else
			{
				ans=ans+lf*rt+rf*lt+lf*rf;
			}
		}
	}
	return ans;
}
int main(){
	string s="T^T&F";
	int n=5;
	int i=0;
	int j=n-1;
	bool st=true;
	cout<<"expression "<<s<<" "<<"output "<<mcm(s,i,j,st);
	return 0;
}
