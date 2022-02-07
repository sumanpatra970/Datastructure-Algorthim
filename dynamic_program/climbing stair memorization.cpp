#include<iostream>
using namespace std;
int solution(int n,int *tb){
	if(n==0){
		return 1;
	}
	else if(n<0){
		return 0;
	}
	if(tb[n]!=0){
		return tb[n];
	}
	else{
		int n1=solution(n-1,tb);
		int n2=solution(n-2,tb);
		int n3=solution(n-3,tb);
		tb[n]=n1+n2+n3;
		return n1+n2+n3;	
	}
}
int main(){
	int n=5;
	int tb[n+1];
	for(int j=0;j<n+1;j++){
		tb[j]=0;
	}
	cout<<solution(n,tb);
	for(int i=0;i<n+1;i++){
		cout<<tb[i];
	}
}
