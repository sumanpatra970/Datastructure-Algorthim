//you have to select two distict character and make words out of a string
#include<iostream>
using namespace std;
void solution(string ip,int *v,int n,int cb,string op){
	if(cb==2){
		cout<<op<<" ";
		return ;
	}
	for(int i=0;i<ip.length();i++){
		if(v[i]==0){
			string op1=op+ip[i];
			v[i]=1;
			solution(ip,v,n,cb+1,op1);
			v[i]=0;
		}
	}
	return ;
}
int main(){
	string ip="abc";
	int n=3;
	int v[120];
	for(int j=0;j<120;j++){
		v[j]=0;
	}
	solution(ip,v,n,0,"");
}
