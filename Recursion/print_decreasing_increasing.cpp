//program to print decreasing order and increasing order of a no using recursion
#include<iostream>
using namespace std;
int print(int n){
	if(n==0)
	{
		return 1;	
	}
	cout<<n<<" ";
	print(n-1);
	cout<<n<<" ";
	return 1;
}
int main(){
	int n;
	cout<<"enter n ";
	cin>>n;
	cout<<"printing decreasing-increasing ";
	print(n);
	return 0;
}
