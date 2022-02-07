#include<iostream>
using namespace std;
void displayarray(int *a,int idx,int size){
	if(size==idx){
		return ;
	}
	cout<<a[idx]<<" ";
	displayarray(a,idx+1,size);	
}
int main(){
	int n;
	cout<<"enter size ";
	cin>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++){
		cout<<"enter element ";
		cin>>a[i];
	}
	displayarray(a,0,n);
	return 0;
}
