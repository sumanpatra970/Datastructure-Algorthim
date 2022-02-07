#include<iostream>
using namespace std;
void combination(int n,int i,int c,string *a,int *v,string asf){
	if(i==n){
		cout<<asf;
		cout<<endl;
		return;
	}
	if(v[1]>0){
		v[1]--;
		combination(n,i+1,c+1,a,v,asf+"a");
		v[1]++;	
	}
	if(v[2]>0){
		v[2]--;
		combination(n,i+1,c+1,a,v,asf+"b");
		v[2]++;	
	}
	return;
}
int main(){
	string a[4];
	int v[3]={0,2,2};
	combination(4,0,0,a,v,"");
	return 0;
}
