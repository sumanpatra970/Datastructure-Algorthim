#include<iostream>
using namespace std;
int main(){
	int a[6]={1,2,3,4,5,6};
	int l=-1;
	int h=-1;
	int n=6;
	int cl=0;
	int ll=0;
	for(int i=0;i<n;i++){
		if(a[i+1]==a[i]+1){
			cl++;
		}
		else{
			if(ll<cl){
				ll=cl;	
			}
			cl=0;
			cl++;
		}
	}
	cout<<ll+1;
	return 0;
}
