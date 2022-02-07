//program to find longest common subsequence
#include<iostream>
using namespace std;
int lcs(string x,string y,int m,int n){
	if(m==0 || n==0)
	{
		return 0;
	}
	if(x[m-1]==y[n-1])
	{
		return 1+lcs(x,y,m-1,n-1);
	}
	else
	{
		return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
	}
}
int main(){
	string x="abcfgh";
	string y="abcvgh";
	cout<<"lcs is "<<lcs(x,y,6,6);
	return 0;
}
