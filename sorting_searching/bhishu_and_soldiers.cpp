#include<iostream>
using namespace std;
int main(){
	int a[6]={5,2,4,7,8,9};
	int q[3]={4,8,11};
	int s=0;
	int sa[6]={2,4,5,7,8,9};//sort of array
	for(int i=0;i<3;i++){
		int x=q[i];
		int r=0;
		for(int j=0;j<6;j++){
			if(sa[j]>x){
				break;
			}
			else{
				s=s+sa[j];
				r++;
			}
		}
		cout<<r<<endl;
	}
	cout<<s;
	return 0;
}
