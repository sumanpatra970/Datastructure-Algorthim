#include<iostream>
using namespace std;
void combination(int n,int c,int *a,int *v){
	if(c==n){
		int counter=4;
		if(v[3]==1){
			a[counter]=3;
			counter++;	
		}
		for(int cc=3;cc>=0;cc--){
			a[counter]=a[cc];
			counter++;
		}
		cout<<endl;
		for(int dd=0;dd<8;dd++){
			cout<<a[dd]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<3;i++){
		if(v[i]>0){
			v[i]--;
			a[c]=i;
			combination(n,c+1,a,v);
			v[i]++;
			a[c]=0;	
		}
	}
	return;
}
int main(){
	int a[9];
	int v[4]={0,2,2,1};
	combination(4,0,a,v);
	return 0;
}
