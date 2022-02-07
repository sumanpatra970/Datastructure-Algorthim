//program to calculate power of a no using recursion
#include<iostream>
using namespace std;
int pow(int x,int y){
	if(y==1)
	{
		return x;
	}
	int py1=pow(x,y-1);
	int py=x*py1;
	return py;
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
