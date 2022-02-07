#include<iostream>
using namespace std;
int main(){
	int a[8]={1,4,2,3,5,7,8,9};
	int sum=18;
	for(int i=0;i<8;i++){
		for(int j=0;j<8 && j!=i;j++){
			for(int k=0;k<8 && k!=j && k!=i;k++){
				if(a[i]+a[j]+a[k]==sum){
					cout<<"triplet found";
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
}
