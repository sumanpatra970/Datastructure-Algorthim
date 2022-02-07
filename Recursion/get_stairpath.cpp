#include<iostream>
#include<vector>
using namespace std;
void printstairpath(string op,int n){
	if(n==0){
		cout<<op<<" ";
		return ;
	}
	if(n<0){
		return ;
	}
	printstairpath(op+"1",n-1);
	printstairpath(op+"2",n-2);
	printstairpath(op+"3",n-3);
	return ;
}

int main(){
	int n;
	cout<<"enter max floor no";
	cin>>n;
	printstairpath("",n);
	return 0;
}
