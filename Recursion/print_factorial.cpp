#include<iostream>
using namespace std;
int printfact(int n){
	if(n==1){
		return 1;
	}
	int pfn1=printfact(n-1);
	int pfn=pfn1*n;
	return pfn;
}
int main(){
	int n;
	cout<<"enter no ";
	cin>>n;
	int res=printfact(n);
	cout<<"factorial of "<<n<<" is "<<res;
}
