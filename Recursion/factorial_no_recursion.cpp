//program to find factorial of no using recursion
#include<iostream>
using namespace std;
int fact(int n){
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n;
	cout<<"enter no ";
	cin>>n;
	cout<<"factorial of "<<n<<" is "<<fact(n);
}
