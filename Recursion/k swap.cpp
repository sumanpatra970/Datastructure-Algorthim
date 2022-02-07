#include<iostream>
using namespace std;
string swap(string ip,int i,int j){
	char temp=ip[i];
	ip[i]=ip[j];
	ip[j]=temp;
	return ip;
}
void solution(string ip,int n){
	if(n==0){
		cout<<ip<<" "<<endl;
		return ;
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(ip[i]<ip[j]){
				string nip=swap(ip,i,j);
				solution(nip,n-1);
			}
		}
	}
	return ;
}
int main(){
	string ip="1234";
	int k=2;
	solution(ip,k);
	return 0;
}
