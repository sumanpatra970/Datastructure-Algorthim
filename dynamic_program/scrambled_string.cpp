#include<iostream>
using namespace std;
bool solve(string a,string b){
	if(a.compare(b)==true){
		return true;
	}
	if(a.length()<=1){
		return false;
	}
	int j=a.length();
	int n=j;
	for(int k=1;k<a.length();k++){
		bool op,op1,op2;
		op1=solve(a.substr(0,k),b.substr(n-k,j)) && solve(a.substr(k+1,j),b.substr(0,n-1-k));
		op2=solve(a.substr(0,k),b.substr(0,k)) && solve(a.substr(k+1,j),b.substr(k+1,j));
		op=op1 || op2;
		return op;
	}
}
int main(){
	string a="great";
	string b="eatrg";
	cout<<solve(a,b);
}
