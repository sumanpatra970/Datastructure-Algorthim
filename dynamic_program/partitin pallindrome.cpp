#include<iostream>
using namespace std;
bool pallindrome(char *a,int i,int j){
	while(i<=j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}
int sol(char *a,int i,int j){
	if(i>j){
		return 0;
	}
	if(pallindrome(a,i,j)==true){
		return 0;
	}
	int minn=800;
	for(int k=i;k<j;k++){
		int res=sol(a,i,k)+sol(a,k+1,j)+1;
		cout<<"res = "<<res<<endl;
		if(minn>res){
			minn=res;
		}
	}
	return minn;
}
int main(){
	char a[]="nitin";
	cout<<sol(a,0,5);
	return 0;
}
