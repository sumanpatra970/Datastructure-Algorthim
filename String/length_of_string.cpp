//program to calculate string length
#include<iostream>
using namespace std;
int main(){
	char s[10];
	cout<<"enter string ";
	cin>>s;
	int count=0;
	int i=0;
	while(s[i]!=0)
	{
		count++;
		i++;
	}
	cout<<"length os string is "<<count;
	return 0;
}
