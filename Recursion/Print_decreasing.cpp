#include<iostream>
using namespace std;
void printincreasing(int n){
	if(n==0){
		return ;
	}
	cout<<n<<" ";
	printincreasing(n-1);
	return ;
}
int main(){
	int n;
	cout<<"enter no ";
	cin>>n;
	printincreasing(n);
	return 0;
}
