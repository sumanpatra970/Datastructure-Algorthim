//program to print 1 to n using recursion
#include<iostream>
using namespace std;
void print(int n){
	if(n==0)
	{
		cout<<"printing = ";	
	}
	else
	{
		print(n-1);
		cout<<n<<" ";
	}
}
int main(){
	int n;
	cout<<"enter n ";
	cin>>n;
	print(n);
	return 0;
}
