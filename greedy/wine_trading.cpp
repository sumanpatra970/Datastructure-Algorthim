#include<iostream>
using namespace std;
int main(){
	int a[5]={5,-4,1,-3,1};
	int s=0;
	int res=0;
	for(int i=0;i<5;i++){
		//cout<<s<<" ";
		if(a[i]>0){
			s=s+a[i];
			if(i!=0){
				res=res+a[i];
			}
		}
		else{
			s=s+a[i];
			res=res-a[i];
		}
		cout<<s<<" ";
	}
	cout<<endl<<res;
	return 0;
}
