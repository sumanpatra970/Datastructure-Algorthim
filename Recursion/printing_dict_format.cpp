//printing dictionary format of a no;
#include<iostream>
using namespace std;
void dfs(int i,int n){
	if(i>n)
	{
		return ;
	}
	cout<<i<<endl;
	for(int j=0;j<9;j++)
	{
		dfs(i*10+j,n);
	}
}
int main(){
	int n=100;
	cout<<"dict nos are "<<endl;
	for(int i=1;i<9;i++)
	{
		dfs(i,n);
	}
	return 0;
}
