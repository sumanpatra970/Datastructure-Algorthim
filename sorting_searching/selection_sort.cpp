//program for selection sort
#include<iostream>
using namespace std;
int main(){
	int a[5]={10,20,40,30,5};
	int n=5;
	int k;
	cout<<"array is ";
	for(int v=0;v<n;v++)
	{
		cout<<a[v]<<" ";
	}
	cout<<endl;
	int pointer=0;
	for(int i=0;i<n;i++)
	{
		int min=a[i];
		int flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				k=j;
				flag++;
			}
		}
		if(flag>0)
		{
			int t=a[i];
			a[i]=min;
			a[k]=t;	
			pointer++;
		}
	}
	cout<<"ans "<<pointer<<endl;
	cout<<"sorted array is ";
	for(int kk=0;kk<n;kk++)
	{
			cout<<a[kk]<<" ";
	}
	return 0;
}
