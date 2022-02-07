#include<iostream>
using namespace std;
bool check(string str,string *a){
	for(int i=0;i<6;i++){
		if(a[i]==str){
			return true;
		}
	}
	return false;
}
void solution(string ip,string op,string *a){
	if(ip.length()==0){
		cout<<op<<" ";
		return;
	}
	for(int i=0;i<ip.length();i++){
		string str=ip.substr(0,i+1);
		if(check(str,a)){
			string opn=op+"("+str+")";
			string ipn=ip.substr(i+1,ip.length());
			solution(ipn,opn,a);
		}
	}
}
int main(){
	string ip="microsofthiring";
	string op="";
	string a[6]={"micro","soft","hi","ring","microsoft","hiring"};
	solution(ip,op,a);
	return 0;
}
