#include<iostream>
using namespace std;
void getsubseq(string str,string op,int n){
	if(n==0){
		cout<<op<<" ";
		return ;
	}
	char ch=str[n-1];
	getsubseq(str,op,n-1);
	getsubseq(str,op+ch,n-1);
}
int main(){
	string str="abc";
	getsubseq(str,"",3);
}
