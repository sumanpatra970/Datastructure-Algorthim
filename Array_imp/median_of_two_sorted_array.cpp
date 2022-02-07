#include<iostream>
using namespace std;
int main(){
	int m=5;
	int n=4;
	int a[m]={2,3,4,5,20};
	int b[n]={1,9,10,13};
	int maxx=0;
	if(a[m-1]>b[n-1]){
		maxx=a[m-1];
	}
	else{
		maxx=b[n-1];
	}
	if(maxx==a[m-1]){
		for(int i=n-1;i>=0;i--){
			int last=a[m-1];
			int data=b[i];
			cout<<"last "<<last;
			int j;
			for(j=m-2;j>=0;j--){
				
				if(a[j]<data){
					a[j+1]=data;
					break;
				}
				else{
					a[j+1]=a[j];
				}
			}
			if(j==-1){
				a[0]=data;
			}
			b[i]=last;
		}
	}
	int c[m+n];
	int ll=0;
	for(int x=0;x<m;x++){
		c[ll]=a[x];
		ll++;
	}
	for(int y=0;y<n;y++){
		c[ll]=b[y];
		ll++;
	}
	int nn=m+n;
	cout<<endl;
	if(nn%2==0){
		nn=nn/2;
		cout<<(c[nn]+c[nn-1])/2;
	}
	else{
		nn=nn/2;
		cout<<c[nn];
	}
	return 0;
}
