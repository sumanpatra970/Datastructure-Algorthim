//program to check whether string is pallindrome or not
#include<iostream>
using namespace std;
int main(){
	char a[10];
	cout<<"enter string ";
	cin>>a;
	int count=0;
	int i=0;
	while(a[i]!=0)
	{
		count++;
		i++;
	}
	int flag=0;
	int mid=count/2;
	for(int j=0;j<mid;j++)
	{
		if(a[j]!=a[count-1-j])
		{
			cout<<"string is not pallindrome";
			flag++;
			break;
		}
	}
	if(!flag)
	{
		cout<<"string is palindrome";
	}
	return 0;
}
