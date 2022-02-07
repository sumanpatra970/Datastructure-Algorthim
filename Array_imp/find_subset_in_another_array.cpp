#include<iostream>
using namespace std;
int findpos(int *a,int *b,int n){
	int data=b[0];
	for(int i=0;i<n;i++){
		if(a[i]==data){
			return i;
		}
	}
	return -1;
}
int main(){
	int a[6]={1,2,3,4,6,7};
	int b[3]={3,4,7};
	int pos;
	int n=6;
	pos=findpos(a,b,n);
	int i,j;
	cout<<pos;
	if(pos!=-1){
		for(i=pos,j=0;i<pos+3 && j<3;i++,j++){
				if(a[i]==b[j]){
					continue;
				}
				else{
					break;
				}
			}
	}
	if(j!=3){
		cout<<"not a subset";
	}
	else{
		cout<<"subset";
	}
}
