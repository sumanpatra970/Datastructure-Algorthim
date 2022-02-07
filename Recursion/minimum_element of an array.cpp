#include<iostream>
using namespace std;
void mini(int *a,int n,int m,int idx){
	if(idx==n){
		cout<<m;
		return;
	}
	if(m>a[idx])
	{
		m=a[idx];
	}
	mini(a,n,m,idx+1);
	return ;
}
int main(){
	int a[5]={4,7,9,8,2};
	int n=5;
	int min=25553;
	mini(a,n,min,0);
	return 0;
}
