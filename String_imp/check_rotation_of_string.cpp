#include<iostream>
using namespace std;
int main(){
	string st1="ABCD";
	string st2="CDAB";
	string st3=st1+st1;
	int pos;
	cout<<st3<<endl;
	for(int i=0;i<st3.length();i++){
		if(st3[i]==st2[0]){
			pos=i;
			break;
		}
	}
	int c=0;
	int j,f=0;
	for(j=pos;j<st3.length() && c!=st2.length();j++){
		if(st2[c]!=st3[j]){
			cout<<"no";
			f=1;
			break;
		}
		c++;
	}
	if(j==st3.length() && c!=st2.length()){
		cout<<"no";
	}
	else if(f==0){
		cout<<"yes";
	}
}
