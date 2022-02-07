//program to print n to 1 using recursion
#include<iostream>
using namespace std;
int print(int n){
	if(n==0)
	{
		return 1;	
	}
	else
	{
		cout<<n<<" ";
		print(n-1);
		return 1;
	}
}
int main(){
	int n;
	cout<<"enter n ";
	cin>>n;
	cout<<"printing = ";
	print(n);
	return 0;
}
