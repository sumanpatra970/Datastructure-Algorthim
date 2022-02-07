#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n=5;
	int a[n]={5,4,6,1,1};
	int aa[n]={6,5,4,1,1};
	long int x=1;
	int s=0;
	int k=0;
	while(k!=n){
		if(a[k]==1){
			cout<<"k "<<k<<endl;
			for(int j=k;j>0;j--){
				cout<<"t "<<aa[j]<<endl;
				int t=aa[j];
				aa[j]=aa[j-1];
				aa[j-1]=t;
			}
			for(int k=0;k<n;k++){
				cout<<aa[k]<<" ";
			}
			cout<<endl;
			k++;
		}
		else{
			k++;
		}
	}
	for(int k=0;k<n;k++){
		cout<<aa[k]<<" ";
	}
	return 0;
}
