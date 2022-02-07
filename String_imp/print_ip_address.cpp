#include<iostream>
#include<math.h>
using namespace std;
void solve(string s,int step,string op,int n){
	//cout<<s<<endl;
	if(step==n){
		if(s.length()==0){
			cout<<op<<endl;		
		}
		return ;
	}
	for(int i=1;i<4;i++){
		int val=0;
		string st=s.substr(0,i);
		for(int j=0;j<st.length();j++){
			char ch=st[j];
			int v=ch-'0';
			v=v*pow(10,st.length()-1-j);
			val=val+v;
		}
		//cout<<st<<" "<<val<<endl;
		if(s.length()>=i && val>0 && val<256){
			solve(s.substr(i,s.length()),step+1,op+s.substr(0,i)+".",n);	
		}	
	}
}
int main(){
	string s="25525511135";
	string op="";
	int n=4;
	int step=0;
	for(int i=1;i<4;i++){
		if(s.length()>=i){
			solve(s.substr(i,s.length()),step+1,op+s.substr(0,i)+".",n);	
		}
	}
}
