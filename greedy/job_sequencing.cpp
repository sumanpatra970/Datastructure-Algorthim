#include<iostream>
using namespace std;
int main(){
	int a[6]={1,2,1,3,5,4};
	int b[6]={10,14,5,6,8,6};
	int maxp=0;
	int md=0;
	for(int d=0;d<6;d++)
	{
		if(md<a[d]){
			md=a[d];
		}
	}
	int v[md+1];
	for(int tt=0;tt<md+1;tt++){
		v[tt]=0;
	}
	for(int i=0;i<5;i++){
		int minn=b[i];
		int p=minn;
		int k=i;
		for(int j=i+1;j<6;j++){
			if(b[j]>minn){
				minn=b[j];
				k=j;
			}
		}
		b[i]=minn;
		b[k]=p;
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	int profit=0;
	for(int m=0;m<6;m++){
		int mm=a[m];
		while(mm>0){
			if(v[mm]==0){
				v[mm]=1;
				profit=profit+b[m];
				break;
			}
			mm--;	
		}
	}
	cout<<"profit "<<profit;
	return 0;
}
