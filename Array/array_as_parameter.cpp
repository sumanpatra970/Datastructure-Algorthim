//program is to design an array and pass it as argument
#include<iostream>
using namespace std;
void display(int *p,int n){
	cout<<"elements of an array are = ";
	p[0]=8;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}	
}
int main(){
	int n;
	cout<<"enter no of elements in array ";
	cin>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter element at index "<<i<<" ";
		cin>>a[i];
	}
	display(a,n);
	cout<<endl;
	cout<<"elements of an array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
