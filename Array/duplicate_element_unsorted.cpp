//program to find duplicate element in unsorted array
#include<iostream>
using namespace std;
int main(){
	int a[5]={7,2,2,3,6};
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cout<<"duplicate element is "<<a[i];
			}
		}
	}
	return 0;
}
