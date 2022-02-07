#include<iostream>
using namespace std;
string solve(int n){
	if(n==2){
		string str="11";
		return str;
	}
	string st=solve(n-1);
	cout<<st<<" ";
	string op="";
	int j;
	for(int i=0;i<st.length();i=j){
		char ch=st[i];
		int f=0;
		int c=ch-'0';
		for(j=i;j<st.length() && st[i]==st[j];j++){
			if(st[j]==ch){
				f++;
			}
		}
		char ch1=f+'0';
		op=op+ch1+ch;	
		}
	return op;
}
int main(){
	int n=5;
	string st=solve(n);
	cout<<st;
	return 0;
}
