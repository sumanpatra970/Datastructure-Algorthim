#include<iostream>
using namespace std;
int pf=0;
int main(){
	int arr[]={900,940,950,1100,1500,1800};
	int dep[]={960,1200,1120,1130,1900,2000};
	int *v=new int[6];
	int l=0;
	v[l]=0;
	for(int i=0;i<6;i++){
		int k=l;
		if(l==0){
			l++;
			pf++;
			v[l]=dep[i];	
		}
		else{
			while(l>0){
				if(v[l]<=arr[i]){
					v[l]=dep[i];
					l=k;
					break;
				}
				else{
					l--;
				}
			}
			if(l==0){
				l=k;
				l++;
				pf++;
				v[l]=dep[i];
			}
		}
	}
	cout<<"platform "<<pf;
	return 0;
}
