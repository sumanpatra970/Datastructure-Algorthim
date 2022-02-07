//program to find the duplicate element in an array
#include<iostream>
using namespace std;
int main(){
	char a[10];
	cout<<"enter string ";
	cin>>a;
	int jk=0;
	for(int c=0;a[c]!=NULL;c++)
	{
		jk++;
	}
	int count=0;
	int i=0;
	count=jk;
	for(int j=0;j<count;j++)
	{
		for(int k=j+1;k<count;k++)
		{
			if(a[k]==a[j])
			{
				cout<<"duplicate char is "<<a[j]<<endl;
			}
		}
	}
	return 0;
}
