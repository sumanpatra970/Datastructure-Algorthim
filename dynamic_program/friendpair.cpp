#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<string> friendpair(int n,vector<string> v){
	cout<<n<<endl;
	if(n==4){
		return v;
	}
	vector<string> ::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		string st=*itr;
		cout<<st<<endl;
		if(st.length()!=0){
			for(int i=0;i<st.length();i++){
				if(st[i]!='|'){
					stringstream ss;
					ss<<n;
					string str;
					ss>>str;
					string stn=st+str;
					v.push_back(stn);
					v=friendpair(n+1,v);	
				}
			}
		}
		if(st.length()!=0){
			stringstream ssi;
			ssi<<n;
			string stri;
			ssi>>stri;
			string stm=st+'|'+stri;
			v.push_back(stm);
			v=friendpair(n+1,v);	
		}
		if(st.length()==0){
			stringstream ssu;
			ssu<<n;
			string stru;
			ssu>>stru;
			v.push_back(stru);
			v=friendpair(n+1,v);
		}
	}
	return v;
}
int main(){
	int n=1;
	vector<string> v;
	v.push_back("");
	friendpair(n,v);
}
