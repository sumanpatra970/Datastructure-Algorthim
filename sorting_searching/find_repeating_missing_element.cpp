#include<iostream>
using namespace std;
int main(){
	int a[4]={1,2,2,4};
	int n=4;
	int x,y;
	int c1=0;
	int s1=n*(n+1)/2;
	int s2=n*(n+1)*(2*n+1)/6;
	for(int i=0;i<n;i++){
		c1=c1+a[i];
	}
	cout<<s1<<" "<<c1<<endl;
	int d=s1-c1;
	int c2=0;
	for(int i=0;i<4;i++){
		c2=c2+a[i]*a[i];
	}
	cout<<s2<<" "<<c2<<endl;
	int k=s2-c2;
	int l=k/d;
	x=(l+d)/2;
	y=l-x;
	cout<<x<<" "<<y;
	return 0;
}
