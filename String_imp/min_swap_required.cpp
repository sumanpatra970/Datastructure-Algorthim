#include<iostream>
using namespace std;
int main(){
	string s="010";
	int ss=0;
	int f=0;
	for(int i=0;i<s.length();i++){
		//cout<<f<<" "<<s[i]<<endl;
		char ch=f+'0';
		if(s[i]!=ch){
			ss++;
		}
		if(f==0){
			f=1;
		}
		else{
			f=0;
		}
	}
	f=1;
	int st=0;
	for(int i=0;i<s.length();i++){
		//cout<<f<<" "<<s[i]<<endl;
		char ch=f+'0';
		if(s[i]!=ch){
			st++;
		}
		if(f==0){
			f=1;
		}
		else{
			f=0;
		}
	}
	cout<<min(ss,st);
	return 0;
}
