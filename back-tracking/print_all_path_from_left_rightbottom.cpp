#include<iostream>
using namespace std;
void solve(int i,int j,int a[3][3],string op){
	if(i==1 && j==2)
	{
		cout<<"res ";
		char ch=a[i][j]+'0';
		op=op+ch;
		cout<<op<<endl;
		return ;
	}
	if(i==2 || j==3){
		return ;
	}
	char ch=a[i][j]+'0';
	solve(i,j+1,a,op+ch);
	solve(i+1,j,a,op+ch);
}
int main(){
	int a[3][3]={{1,2,3},{7,4,5}};
	int n=3;
	string op="";
	solve(0,0,a,op);
}
