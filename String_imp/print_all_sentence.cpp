#include<iostream>
using namespace std;
void solve(string input[3][2],int l,int r,int c,string op){
	if(l==3){
		cout<<op<<endl;
		return ;
	}
	for(int i=0;i<c;i++){
		solve(input,l+1,r,c,op+input[l][i]+" ");
	}
}
int main(){
	string input[3][2]={{"you","i"},{"have","are"},{"sleep","eat"}};
	int l=0;
	int r=3;
	int c=2;
	string op="";
	solve(input,l,r,c,op);
	return 0;
}
