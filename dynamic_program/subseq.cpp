#include<iostream>
using namespace std;
int main(){
	string st="abcabc";
	int a=0;
	int ab=0;
	int abc=0;
	for(int i=0;i<6;i++){
		if(st[i]=='a'){
			a=2*a+1;
		}
		else if(st[i]=='b'){
			ab=2*ab+a;
		}
		else if(st[i]=='c'){
			abc=2*abc+ab;
		}
	}
	cout<<a<<" "<<ab<<" "<<abc;
	return 0;
}
