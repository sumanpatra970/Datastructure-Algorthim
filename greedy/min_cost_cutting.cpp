#include<iostream>
using namespace std;
bool presentboth(int *h,int *v,int n){
	int c=0;
	int d=0;
	for(int i=0;i<3;i++){
		if(h[i]==n){
			c=1;
			break;
		}	
	}
	for(int j=0;j<4;j++){
		if(v[j]==n){
			d=1;
			break;
		}
	}
	if(c==1 && d==1){
		return true;
	}
	else{
		return false;
	}
}
bool check(int *h,int n){
	for(int ii=0;ii<4;ii++){
		if(h[ii]==n){
			return true;
		}
	}	
	return false;
}
int main(){
	int h[3]={2,1,4};
	int v[4]={2,1,3,4};
	int fc[7]={4,4,3,2,2,1,1};
	int hp=1;
	int vp=1;
	int tc=0;
	for(int i=0;i<7;i++){
		cout<<presentboth(h,v,fc[i])<<endl;
		if(presentboth(h,v,fc[i])){
			if(hp<=vp){
				tc=tc+hp*fc[i];
				vp++;
				for(int x=0;x<4;x++){
					if(v[x]==fc[i]){
						v[x]=0;
						break;
					}
				}
			}
			else{
				tc=tc+vp*fc[i];
				hp++;
				for(int y=0;y<3;y++){
					if(h[y]==fc[i]){
						h[y]=0;
						break;
					}
				}
			}
		}
		else{
			if(check(h,fc[i])){
				tc=tc+vp*fc[i];
				hp++;
			}
			else{
				tc=tc+hp*fc[i];
				vp++;
			}
		}
	}
	cout<<"total cost "<<tc;
	return 0;
}
