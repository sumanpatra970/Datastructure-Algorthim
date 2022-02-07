#include<iostream>
using namespace std;
int main(){
	int n=4;
	int m=7;
	float a[m+1]={0,10.00,10.10,10.00,10.30,12.00,9.00,10.00};
	float b[m+1]={0,10.30,10.30,10.20,12.30,12.30,10.10,10.40};
	int pf[m+1]={0,1,1,2,2,3,1,4};
	for(int i=0;i<m;i++){
		float minn=a[i];
		float p=minn;
		int k=i;
		for(int j=i+1;j<m+1;j++){
			if(a[j]<minn){
				minn=a[j];
				k=j;
			}
		}
		a[i]=minn;
		a[k]=p;
		float temp=b[i];
		b[i]=b[k];
		b[k]=temp;
		int yt=pf[i];
		pf[i]=pf[k];
		pf[k]=yt;
	}
	for(int x=0;x<m+1;x++){
		cout<<a[x]<<" ";
	}
	cout<<endl;
	for(int y=1;y<m+1;y++){
		cout<<b[y]<<" ";
	}
	cout<<endl;
	int c=0;
	float v[10];
	for(int vv=0;vv<10;vv++){
		v[vv]=0;
	}
	for(int x=1;x<m+1;x++){
		cout<<"v[p] "<<v[pf[x]]<<endl;
		if(v[pf[x]]==0){
			cout<<"assign "<<x<<" "<<a[x]<<" "<<b[x]<<endl;
			v[pf[x]]=b[x];
			c++;
		}
		else{
			if(v[pf[x]]<=a[x]){
				cout<<"assign "<<x<<" "<<a[x]<<" "<<b[x]<<endl;
				v[pf[x]]=b[x];
				c++;
			}
		}
	}
	cout<<endl;
	cout<<c;
	return 0;
}
