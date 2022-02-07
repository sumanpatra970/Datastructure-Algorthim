//program to find union of two array
#include<iostream>
using namespace std;
int main(){
	int a[5]={11,12,17,9,10};
	int b[5]={11,10,9,7,3};
	int n=5;
	int c[10];
	int i=0,j=0,k=0;
	for(int i=0;i<5;i++)
	{
		int flag=0;
		for(int j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			c[k]=a[i];
			k++;
		}
	}
	for(int l=0;l<5;l++)
	{
		c[k]=b[l];
		k++;
	}
	cout<<"elements are = ";
	for(int m=0;m<k;m++)
	{
		cout<<c[m]<<" ";
	}
}
