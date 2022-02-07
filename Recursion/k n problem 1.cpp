//selection of k distinct character out of a string 
#include<iostream>
using namespace std;
void solution(string ip,int n,int cb,string op){
	if(cb==n){
		if(op.length()==2){
				cout<<op<<" ";
		}
	
		return ;
	}
	string op1=op+ip[cb];
	solution(ip,n,cb+1,op1);
	solution(ip,n,cb+1,op);
	return ;
}
int main(){
	string ip="abc";
	int n=3;
	solution(ip,n,0,"");
}
