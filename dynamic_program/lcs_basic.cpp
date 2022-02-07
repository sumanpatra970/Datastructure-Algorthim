#include<iostream>
using namespace std;
int lcs(string ip1,string ip2,int m,int n){
	if(m==0-1 || n==-1){
		return 0;
	}
	if(ip1[m]==ip2[n]){
		return 1+lcs(ip1,ip2,m-1,n-1);
	}
	else{
		return max(lcs(ip1,ip2,m-1,n),lcs(ip1,ip2,m,n-1));
	}
}
int main(){
	string ip1="abcdg";
	string ip2="abcfg";
	int m=5;
	int n=5;
	cout<<lcs(ip1,ip2,m-1,n-1);
}
