#include<iostream>
using namespace std;
int lcs(string s1,string s2,int m,int n){
	if(m==0 || n==0){
		return 0;
	}
	if(s1[m]==s2[n]){
		return 1+lcs(s1,s2,m-1,n-1);
	}
	else{
		return 1+max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
	}
}
int main(){
	string s1="geek";
	string s2="geesk";
	int m=s1.length();
	int n=s2.length();
	int l=lcs(s1,s2,m-1,n-1);
	cout<<l<<endl;
	if(n>l){
		cout<<n-l;
	}
	else{
		cout<<l-n;
	}
	return 0;
}
