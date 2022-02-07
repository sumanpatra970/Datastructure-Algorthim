#include<iostream>
using namespace std;
int main(){
	int n=6;
	int wt[6]={2,3,4,5,1,2};
	int p[6]={10,6,4,10,8,4};
	int mw=12;
	int pw[6];
	for(int i=0;i<6;i++){
		pw[i]=p[i]/wt[i];
	}
	for(int i=0;i<5;i++){
		int minn=pw[i];
		int kp=minn;
		int k;
		for(int j=i+1;j<6;j++){
			if(pw[j]>minn){
				minn=pw[j];
				k=j;
			}
		}
		pw[i]=minn;
		pw[k]=kp;
		int temp1,temp2;
		temp1=wt[i];
		wt[i]=wt[k];
		wt[k]=temp1;
		temp2=p[i];
		p[i]=p[k];
		p[k]=temp2;
	}
	for(int x=0;x<6;x++){
		cout<<pw[x]<<" ";
	}
	cout<<endl;
	for(int xx=0;xx<6;xx++){
		cout<<p[xx]<<" ";
	}
	cout<<endl;
	for(int xxx=0;xxx<6;xxx++){
		cout<<wt[xxx]<<" ";
	}
	int nw;
	int l=0;
	int profit=0;
	while(l<6){
		if(mw-nw>wt[l]){
			profit=profit+p[l];
			nw=nw+wt[l];	
		}
		l++;
	}
	cout<<endl;
	cout<<profit;;
	return 0;
}
