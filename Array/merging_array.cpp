//program to merge two arrays.
#include<iostream>
using namespace std;
int main(){
	int a[3]={1,3,4};
	int b[3]={0,2,7};
	int i=0,j=0,k=0;
	int c[6];
	while(i!=3 && j!=3)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	for(;i<3;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(;j<3;j++)
	{
		c[k]=b[j];
		k++;
	}
	cout<<"elements in first array are ";
	for(int ll=0;ll<3;ll++)
	{
		cout<<a[ll]<<" ";
	}
	cout<<endl;
	cout<<"elements in second array are ";
	for(int lm=0;lm<3;lm++)
	{
		cout<<b[lm]<<" ";
	}
	cout<<endl;
	cout<<"elements in merged array are ";
	for(int l=0;l<6;l++)
	{
		cout<<c[l]<<" ";
	}
	return 0;
}
