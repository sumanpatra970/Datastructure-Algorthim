#include<iostream>
using namespace std;
bool check(int s1,int s2,int s3){
	cout<<s1<<" "<<s2<<" "<<s3<<endl;
	if(s1==s2){
		if(s2==s3){
			cout<<"true";
			return true;	
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	int a[3]={3,10,8};
	int b[3]={5,7,9};
	int c[3]={16,14,7};
	int s1=0;
	int k1=0;
	int k2=0;
	int k3=0;
	for(int i=0;i<3;i++){
		s1=s1+a[i];
	}
	int s2=0;
	for(int i=0;i<3;i++){
		s2=s2+b[i];
	}
	int s3=0;
	for(int i=0;i<3;i++){
		s3=s3+c[i];
	}
	cout<<s1<<" "<<s2<<" "<<s3<<endl;
	while(!check(s1,s2,s3)){
		int maxx;
		maxx=max(s1,s2);
		maxx=max(maxx,s3);
		if(s1==maxx){
			s1=s1-a[k1];
			k1++;
		}
		if(s2==maxx){
			s2=s2-b[k2];
			k2++;
		}
		if(s3==maxx){
			s3=s3-c[k3];
			k3++;
		}
	if(s1==0 || s2==0 ||s3==0){
		cout<<"not possible";
		break;
	}
	}
	cout<<"done";
}
