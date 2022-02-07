#include<iostream>
using namespace std;
int main(){
	int a[6]={12,10,2,5,11,6};
	int l[6]={1,1,1,1,1,1};
	int r[6]={1,1,1,1,1,1};
	for(int i=1;i<6;i++){
		if(a[i-1]<a[i]){
			l[i]=l[i-1]+1;
		}
	}
	for(int j=4;j>=0;j--){
		if(a[j]>a[j+1]){
			r[j]=r[j+1]+1;
		}
	}
	int s=0;
	for(int x=0;x<6;x++){
		s=s+max(l[x],r[x]);
	}
	cout<<s<<endl;
	return 0;
}
