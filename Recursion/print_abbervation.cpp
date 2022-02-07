#include<iostream>
using namespace std;
void printabbervation(string ip,string op,int n,int i){
	if(i==n){
		cout<<op<<" ";
		return ;
	}
	printabbervation(ip,op+ip[i],n,i+1);
	printabbervation(ip,op+"1",n,i+1);
	return ;
}
int main(){
	string ip="pep";
	string op="";
	printabbervation(ip,op,3,0);
}
