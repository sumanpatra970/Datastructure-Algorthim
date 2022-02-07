#include<iostream>
using namespace std;
int main(){
	string st1="1X";
	string st2="2Y";
	string st3="1XY2";
	int vfs[st1.length()]={0,0};
	int vss[st2.length()]={0,0};
	if(st3.length()!=st1.length()+st2.length()){
		cout<<"no";
	}
	else{
		for(int i=0;i<st3.length();i++){
			char ch=st3[i];
			int f=0;
			int g=0;
			for(int j=0;j<st1.length();j++){
				if(st1[j]==ch && vfs[j]==0){
					vfs[j]=1;
					f=1;	
				}
			}
			for(int k=0;k<st2.length();k++){
				if(st2[k]==ch && vss[k]==0){
					vss[k]=1;
					g=1;
				}
			}
			if(f==1 || g==1){
				
			}
			else{
				cout<<"no";
			}
		}
	}
}
