#include<iostream>
using namespace std;
int main(){
	int d[7]={7,5,3,11,12,9,1};
	int a[7]={1,3,5,7,9,11,12};//sort of d
	int k=17;
	int i=0;
	int n=7;
	int sum=15;
	while(i!=n-2){
		int j=i+1;
		int k=n-1;
		while(j<k){
			if(a[i]+a[j]+a[k]<sum){
				j++;	
			}
			else if(a[i]+a[j]+a[k]>sum){
				k--;
			}
			else{
				cout<<"found"<<endl;
				break;
			}
		}
	i++;	
	}
}
