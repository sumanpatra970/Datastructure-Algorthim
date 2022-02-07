#include<iostream>
using namespace std;
int main(){
	string a[8]={"i","like","samsung","kol","nothing","to","say","poc"};
	string s="ilike";
	int n=s.length();
	for(int i=1;i<n-2;i++){
		string s1=s.substr(0,i);
		string s2=s.substr(i,n);
		int f=0;
		int g=0;
		for(int j=0;j<8;j++){
			if(a[j]==s1){
				f=1;
			}
		}
		for(int j=0;j<8;j++){
			if(a[j]==s2){
				g=1;
			}
		}
		if(f==1 && g==1){
			cout<<"yes"<<" "<<s1<<" "<<s2<<endl;
		}
	}
	return 0;
}
