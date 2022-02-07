//program to reverse string
#include<iostream>
using namespace std;
int main(){
	char a[10]="suman";
	int count=0;
	int i=0;
	cout<<"string is "<<a<<endl;
	while(a[i]!=0)
	{
		count++;
		i++;
	}
	cout<<count;
	int mid=count/2;
	for(int j=0;j<mid;j++)
	{
		char temp;
		temp=a[j];
		a[j]=a[count-1-j];
		a[count-1-j]=temp;
	}
	cout<<"reversed string is "<<a;
	return 0;
}
