#include<iostream>
using namespace std;
int main(){
	int aa[5][2]={{1,3},{16,20},{7,10},{11,15},{2,5}};
	int a[5][2]={{1,3},{2,5},{7,10},{11,15},{16,20}};//sort of a
	int i=1;
	int n=5;
	while(i!=n){
		if(a[i][0]>a[i-1][0] && a[i][0]<a[i-1][1]){
			a[i-1][0]=a[i-1][0];
			a[i-1][1]=a[i][1];
			for(int ii=i;ii<n;ii++){
				a[ii][0]=a[ii+1][0];
				a[ii][1]=a[ii+1][1];
			}
			n--;
		}
		else{
			i++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i][0]<<" "<<a[i][1]<<endl;
	}
	int k=9;
	int ik=0;
	while(k>0){
		if((a[ik][1]-a[ik][0])+1<k){
			k=k-((a[ik][1]-a[ik][0])+1);
			ik++;
		}
		else{
			cout<<a[ik][0]+k-1;
			break;
		}
	}
}
