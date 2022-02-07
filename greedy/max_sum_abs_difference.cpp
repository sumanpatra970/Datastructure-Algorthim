#include<iostream>
#include<vector>
using namespace std;
int maxx=-1;
void solve(int *a,int *v,vector<int> vv,int n,int c){
	if(c==n){
		int sum=0;
		vector<int>::iterator itr;
		for(itr=vv.begin();itr!=vv.end();itr++){
			cout<<*itr<<" ";
		}
		for(int i=0;i<4;i++){
			if(i!=3){
				int d=vv[i]-vv[i+1];
				cout<<" d "<<d;
				if(d<0){
					d=d-(2*d);
				}	
				else{
					d=d;
				}
				sum=sum+d;
			}
			else{
				int d=vv[i]-vv[0];
				cout<<"d - "<<d;
				if(d<0){
					d=d-(2*d);
				}	
				else{
					d=d;
				}
				sum=sum+d;
			}
		}
		cout<<" sum "<<sum<<endl;
		maxx=max(maxx,sum);
		return ;
	}
	for(int i=0;i<4;i++){
		if(v[a[i]]==0){
			v[a[i]]=1;
			vv.push_back(a[i]);
			solve(a,v,vv,n,c+1);
			vv.pop_back();
			v[a[i]]=0;
		}
	}
}
int main(){
	int a[4]={1,2,4,8};
	int v[9];
	for(int i=0;i<9;i++){
		v[i]=0;
	}
	vector<int> vv;
	int n=4;
	int c=0;
	int p=-1;
	for(int i=0;i<4;i++){
			v[a[i]]=1;
			vv.push_back(a[i]);
			solve(a,v,vv,n,c+1);
			vv.pop_back();
			v[a[i]]=0;	
	}
	cout<<maxx;
	return 0;
}
