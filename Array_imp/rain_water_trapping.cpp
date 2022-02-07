#include<iostream>
using namespace std;
int maxleft(int *b,int i){
	int maxx=-1;
	for(int j=i-1;j>=0;j--){
		maxx=max(b[j],maxx);
	}
	return maxx;
}
int maxright(int *b,int i){
	int maxx=-1;
	for(int j=i+1;j<6;j++){
		maxx=max(b[j],maxx);
	}
	return maxx;
}
int main(){
	int b[6]={4,2,0,1,3,6};
	int s[6]={0,0,0,0,0,0};
	int n=6;
	for(int i=0;i<n;i++){
		if(i==0 || i ==n-1){
			s[i]=0;
		}
		else{
			int ml=maxleft(b,i);
			int mr=maxright(b,i);
			int m=min(ml,mr);
			if(m>b[i]){
				s[i]=m-b[i];	
			}
			else{
				s[i]=0;
			}
		}
	}
	int sum=0;
	for(int x=0;x<6;x++){
		cout<<s[x]<<" ";
		sum=sum+s[x];
	}
	cout<<endl<<sum;
	return 0;
}
