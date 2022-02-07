//program to create string using char array
#include<iostream>
using namespace std;
int main(){
	char str[10];
	cout<<"enter string ";
	cin>>str;
	cout<<"string is ";
	for(int i=0;str[i]!=NULL;i++)
	{
		cout<<str[i];
	}
	return 0;
}
