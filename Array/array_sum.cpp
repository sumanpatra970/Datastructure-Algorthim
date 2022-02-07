//program to find elements to get target sum not using dp/recursion //o(n2)
#include<iostream>
using namespace std;
int main(){
	int a[8]={11,12,10,9,7,6,5,4};
	int n=8;
	int sum;
	cout<<"enter sum no ";
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				cout<<"elements are "<<a[i]<<" "<<a[j]<<endl;
			}
		}
	}
	return 0;
}
