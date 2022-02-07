#include<iostream>
using namespace std;
void printcombination(int *a,int *v,int k,int c){
	if(c==4){
		for(int x=0;x<4;x++){
			cout<<a[x];
		}
		cout<<endl;
		return ;
	}
	int f=0;
	for(int i=0;i<2;i++){
		if(k<3 && v[i+1]==0){
			a[c]=i+1;
			v[i+1]=1;
			printcombination(a,v,k+1,c+1);
			a[c]=0;
			v[i+1]=0;
		}
	}
	printcombination(a,v,k,c+1);
	return ;
}
int main(){
	int a[4]={0,0,0,0};
	int v[3]={0,0,0};
	int k=1;
	int c=0;
	printcombination(a,v,k,c);
	return 0;
}

