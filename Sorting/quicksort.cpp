#include<iostream>
using namespace std;
int partition(int *a,int l, int h){
	cout<<l<<" @ "<<h<<endl;
	int pivot=a[l];
	int i=l;
	int j=h;
	cout<<"pivot "<<pivot<<endl;
	while(i<=j){
		cout<<"in";
		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>=pivot){
			j--;
		}
		cout<<" i "<<i<<" j "<<j<<endl;
		if(i<=j){
			cout<<"inn "<<endl;
			int temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	if(j>=0 && j>=l){
		int t=a[j];
		a[j]=a[l];
		a[l]=t;
		return j;
	}
	else{
		return l;
	}
	return j;
}
void quicksort(int *a,int l,int h){
	cout<<l<<" "<<h<<endl;
	if(l<h){
		int j=partition(a,l,h);
		cout<<j<<endl;
		cout<<"array after partition ";
		for(int i=0;i<8;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		if(j>=0){
			if(j>l){
				quicksort(a,l,j);
			}
			quicksort(a,j+1,h);
		}
	}
}
int main(){
	int n=8;
	int xx=10000;
	int s[n]={2,1,56,7,8,12,1,9};
	int l=0;
	int h=7;
	quicksort(s,l,h);
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
