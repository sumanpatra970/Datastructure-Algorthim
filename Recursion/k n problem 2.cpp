//selection of k distinct character out of a string 
#include<iostream>
using namespace std;
void solution(string ip,int c,int n,int lb,string op){
	if(op.length()==2){
		cout<<op<<" ";
		return ;
	}
	for(int i=lb+1;i<n;i++){
		solution(ip,c+1,n,i,op+ip[i]);
	}
	return ;
}
int main(){
	string ip="abc";
	int n=3;
	int lb=-1;
	solution(ip,1,n,lb,"");
}
