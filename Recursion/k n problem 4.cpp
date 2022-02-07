//you have to select two distict character and make words out of a string
#include<iostream>
using namespace std;
void solution(string ip,int c,int n,string op){
	if(op.length()==2){
		cout<<op<<" ";
		return ;
	}
	for(int i=0;i<n;i++){
		solution(ip,c+1,n,op+ip[i]);
	}
	return ;
}
int main(){
	string ip="abc";
	int n=3;
	int lb=-1;
	solution(ip,1,n,"");
	}
