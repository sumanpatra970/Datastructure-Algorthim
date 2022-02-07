//program to find missing element in an array
#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,3,4,5,6,7,9,10,11};
	int n=10;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]+1==a[i+1])
		{
			count++;
		}
		else
		{
			cout<<"element missing is ";
			cout<<a[i]+1;
			break;
		}
	}
	return 0;
}
