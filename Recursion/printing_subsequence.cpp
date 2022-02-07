//program to print all subsequences of a string
#include<iostream>
using namespace std;
void printsubsequence(string ip,string op,int n){
	if(n==3)
	{
		cout<<op<<" ";
		return ;
	}
	printsubsequence(ip,op+ip[n],n+1);
	printsubsequence(ip,op,n+1);
	return ;
}
int main(){
	string ip="abc";
	string op="";
	int n=0;
	cout<<"string is = "<<ip<<endl;
	cout<<"printing subsequences = ";
	printsubsequence(ip,op,n);
	return 0;
}
