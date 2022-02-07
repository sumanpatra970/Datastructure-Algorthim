#include<iostream>
using namespace std;
bool pallindrome(string str){
	for(int i=0;i<str.length()/2;i++){
		int n=str.length();
		if(str[i]!=str[n-1-i]){
			return false;
		}
	}
	return true;
}
void print(string ip,string op,int n){
	if(ip.length()==0){
		cout<<op<<" ";
		return ;
	}
	for(int j=1;j<n;j++){
		string ip1=ip.substr(0,j);
		if(pallindrome(ip1)){
			cout<<"input "<<ip1<<" "<<ip<<endl;
			op=op+"("+ip1+")";
			string ip2=ip.substr(j,n);
			print(ip2,op,n);
			ip=ip1+ip2;
			cout<<"back = "<<ip<<endl;
		}
	}
	return ;
}
int main(){
	string ip="aabbaa";
	string op="";
	int n=6;
	print(ip,op,n);
	return 0;
}
