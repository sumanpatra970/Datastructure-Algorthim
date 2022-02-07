#include<iostream>
using namespace std;
void printpermutation(string str,string op,int n){
	if(n==0){
		cout<<op<<" ";
		return ;
	}
	for(int i=0;i<n;i++){
		char ch=str[i];
		string strl=str.substr(0,i);
		string strr=str.substr(i+1,n);
		printpermutation(strl+strr,op+ch,n-1);
	}
	return ;
}
int main(){
	string str="abc";
	printpermutation(str,"",3);
	return 0;
}
