//program to calculate power using recursion
#include<iostream>
using namespace std;
int pow(int x,int y){
	if(y==1)
	{
		return x;
	}
	int p2=pow(x,y/2);
	if(y%2==0)
	{
		return p2*p2;
	}
	else
	{
		return p2*p2*x;
	}
}
int main(){
	int x,y;
	cout<<"enter x ";
	cin>>x;
	cout<<"enter y ";
	cin>>y;
	cout<<"power is "<<pow(x,y);
	return 0;
}

