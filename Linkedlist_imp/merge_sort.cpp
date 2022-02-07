#include<iostream>
using namespace std;
void merging(int *a,int x,int y,int n){
	int c[n-x];
	int k=0;
	int f=x;
	int m=y;
	while(x!=m && y!=n){
		if(a[x]<a[y]){
			c[k]=a[x];
			x++;
			k++;
		}
		else{
			c[k]=a[y];
			y++;
			k++;
		}
	}
	while(x!=m){
		c[k]=a[x];
		x++;
		k++;	
	}
	while(y!=n){
		c[k]=a[y];
		y++;
		k++;
	}
	for(int i=0;i<k;i++){
		a[f]=c[i];
		f++;
	}
}
void mergesort(int *a,int x,int y){
	cout<<x<<" "<<y<<endl;
	if(y-x==1){
		return ;
	}
	int m=(x+y)/2;
	mergesort(a,x,m);
	mergesort(a,m,y);
	merging(a,x,m,y);
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return ;
}
int main(){
	int a[8]={7,4,8,5,9,1,2,3};
	int n=8;
	mergesort(a,0,n);
	for(int j=0;j<8;j++){
		cout<<a[j]<" ";
	}
}
