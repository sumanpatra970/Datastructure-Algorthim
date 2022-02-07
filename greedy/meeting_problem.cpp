#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > v;
int solve(int a[6],int b[6]){
	for(int i=0;i<5;i++){
		int minn=b[i];
		int p=minn;
		int k=i;
		for(int j=i+1;j<6;j++){
			if(b[j]<minn){
				minn=b[j];
				k=j;
			}
		}
		cout<<"min "<<minn<<" k "<<k<<" p "<<p;
		cout<<endl;
		b[i]=minn;
		b[k]=p;
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	int c=0;
	for(int m=1;m<6;m++){
		if(b[m]>b[m-1]){
			c++;
		}
	}
	return c;
}
int main(){
	int a[6]={0,3,1,5,8,5};
	int b[6]={6,4,2,7,9,9};
	cout<<solve(a,b);
	return 0;
}
