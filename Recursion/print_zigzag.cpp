//program to print zizag
#include<iostream>
using namespace std;
void pzz(int n){
	if(n==0)
	{
		return ;
	}
	cout<<n;
	pzz(n-1);
	cout<<n;
	pzz(n-1);
	cout<<n;
}
int main(){
	int n;
	cout<<"enter no";
	cin>>n;
	pzz(n);
	return 0;
}
