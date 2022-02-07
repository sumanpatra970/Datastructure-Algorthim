//program to delete elemnent in an array
//unsorted array with shifting
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,7,0};
	int index,val;
	cout<<"enter index no to delete";
	cin>>index;
	int n=5;
	int temp;
	for(int i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<"elements of an array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}

