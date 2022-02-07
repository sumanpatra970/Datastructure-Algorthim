#include<iostream>
using namespace std;
int main(){
	string s="ddabc";
	char ch1=s[0];
	char ch2='a';
	for(int i=2;i<s.length();i++){
		cout<<s[i]-'0'<<" "<<ch2-'0'<<endl;
		if((s[i]-'0')<(ch2-'0') && ch1!=ch2){
			ch2=s[i];
		}
	}
	cout<<ch1<<ch2;
	for(int i=0;i<s.length();i++){
		if(s[i]==ch1){
			s[i]=ch2;
		}
		if(s[i]==ch2){
			s[i]=ch1;
		}
	}
	cout<<s;
	return 0;
}
