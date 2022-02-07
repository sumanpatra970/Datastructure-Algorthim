#include<iostream>
using namespace std;
int printpower(int p,int q){
	if(q==1){
		return p;
	}
	int temp=printpower(p,q-1);
	int res=temp*p;
	return res;
}
int main(){
	int first,second;
	cout<<"enter first no ";
	cin>>first;
	cout<<"enter second no";
	cin>>second;
	cout<<"Res is "<<printpower(first,second);
	
	
}
