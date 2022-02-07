#include<iostream>
using namespace std;
int main(){
	int a[5]={10,20,4,30,5};
	int n=5;
	for(int i=1;i<n;i++)
	{
		int j=i;
		while(j>0)
		{
			if(a[j]<a[j-1])
			{
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
			j--;
		}
	}
	if(n%2==0){
		n=n/2;
		cout<<(a[n]+a[n-1])/2;
	}
	else{
		n=n/2;
		cout<<a[n];
	}
	return 0;
}
