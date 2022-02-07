#include<iostream>
using namespace std;
int printpower(int p,int q){
	if(q==1){
		return p;
	}
	int temp=printpower(p,q/2);
	int res;
	if(q%2==0){
		res=temp*temp;	
	}
	else{
		res=temp*temp*p;
	}
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
