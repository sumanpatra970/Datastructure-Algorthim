#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,3,-4,4,-2,-1,8,9,10};
	int p[10];
	int q[10];
	int c=0;
	for(int i=0;i<10;i++){
		if(a[i]<0){
			p[c]=a[i];
			c++;
		}
	}
	p[c]=0;
	c=0;
	for(int j=0;j<10;j++){
		if(a[j]>=0){
			q[c]=a[j];
			c++;
		}
	}
	q[c]=0;
	c=0;
	for(int x=0;p[x]!=0;x++){
		cout<<p[x]<<" ";
	}
	cout<<endl;
	for(int y=0;q[y]!=0;y++){
		cout<<q[y]<<" ";
	}
	cout<<endl;
	int k;
	int d=0;
	int e=0;
	for(k=0;p[d]!=0 && q[e]!=0;k++){
		if(k%2==0){
			cout<<q[e]<<" ";
			e++;
		}
		else{
			cout<<p[d]<<" ";
			d++;
		}
	}
	if(p[d]==0){
		for(int ll=e;q[ll]!=0;ll++){
			cout<<q[ll]<<" ";
		}
	}
	else if(q[e]==0){
		for(int kk=d;p[kk]!=0;kk++){
			cout<<p[kk]<<" ";
		}
	}
}
