#include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,4,5,6,2};
	int n=6;
	int i=0;
	int j=0;
	int k=3;
	int maxx=-1;
	int sum=0;
	while(j<n){
		sum=sum+a[j];
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			maxx=max(maxx,sum);
			sum=sum-a[i];
			i++;
			j++;
		}
	}
	cout<<maxx;
	return 0;
}
