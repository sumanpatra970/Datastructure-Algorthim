//program to print array reverse-way using recursion
#include<iostream>
using namespace std;
void print(int *a,int index,int n){
	if(index==-1)
	{
		return;
	}
	cout<<a[index]<<" ";
	print(a,index-1,n);
	return ;
}
int main(){
	int a[5]={2,3,4,5,7};
	int n=5;
	int index=n-1;
	cout<<"printing array = ";
	print(a,index,n);
}
