#include<iostream>
using namespace std;
void coinchange(int a[4],int tar,int asf,int used[4]){
	cout<<asf<<endl;
	for(int x=0;x<4;x++){
		cout<<used[x]<<" ";
	}
	cout<<endl;
	if(asf>tar){
		return ;
	}
	else if(tar==asf){
		cout<<"ans"<<endl;
		return ;
	}else{
		for(int i=0;i<4;i++){
			if(used[i]==0){
				used[i]=1;
				coinchange(a,tar,asf+a[i],used);
				used[i]=0;
			}
		}	
	}
}
int main(){
	int a[4]={2,3,4,5};
	int tar=14;
	int used[4]={0,0,0,0};
	coinchange(a,tar,0,used);
	return 0;
}
