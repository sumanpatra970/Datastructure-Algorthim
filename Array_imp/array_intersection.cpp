//program to find intersected elemnts in two array
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,5,8,9,0};
	int b[5]={1,6,5,11,12};
	int n=5;
	int k=0;
	int c[10];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=b[j];
				k++;
				break;
			}
		}
	}
	cout<<"intersection of two array is ";
	for(int l=0;l<k;l++)
	{
		cout<<c[l]<<" ";
	}
	return 0;
}
