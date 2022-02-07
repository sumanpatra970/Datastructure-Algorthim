#include<iostream>
using namespace std;
int main(){
	int a[7]={6,5,3,2,8,10,9};
	int k=3;
	int n=7;
	for(int i=0;i<n;i++){
		int minn=800;
		int p;
		for(int j=i;j<=k+i && j<n;j++){
			if(minn>a[j]){
				minn=min(minn,a[j]);
				p=j;
			}
		}
		cout<<a[i]<<" "<<minn<<" "<<" "<<p<<" "<<a[p]<<endl;
		int t=a[p];
		a[p]=a[i];
		a[i]=t;
	}
	for(int l=0;l<7;l++){
		cout<<a[l]<<" ";
	}
	return 0;
}
