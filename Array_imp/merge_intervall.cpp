#include<iostream>
using namespace std;
bool isThereChance(int a[5][2],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j][0]>=a[i][0] && a[j][0]<=a[i][1] && i!=j){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int a[5][2]={{1,3},{12,18},{2,6},{6,9},{6,11}};
	int f=1;
	int n=5;
	int pv=1;
	while(isThereChance(a,n)==true){
		for(int i=0;i<n;i++){
		f=0;
		pv=0;
		int j;
		for(j=0;j<n;j++){
			if(a[j][0]>=a[i][0] && a[j][0]<=a[i][1] && i!=j){
				int h=max(a[i][1],a[j][1]);
				a[i][1]=h;
				a[i][0]=a[i][0];
				f=1;
				pv=1;
				n--;
				break;
			}
		}
		if(f=1){
			for(int k=j;k<n;k++){
				a[k][0]=a[k+1][0];
				a[k][1]=a[k+1][1];	
			}
		}	
	}
	}
	for(int x=0;x<n;x++){
		cout<<a[x][0]<<" "<<a[x][1]<<endl;
	}
}
