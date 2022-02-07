#include<iostream>
#include<string>
#include<map>
using namespace std;
int value(string st,map<char,int> mp){
	int s=0;
	for(int i=0;i<st.length();i++){
		int v=mp[st[i]];
		s=s+v;
	}
	return s;
}
bool check(string s1,string s2){
	int f=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
			f=1;
		}
	}
	if(f==1){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	string sst="bde";
	string st="abcabde";
	map<char,int> mp;
	int counter=1;
	for(int i=0;i<st.length();i++){
		if(mp.find(st[i])==mp.end()){
			mp[st[i]]=counter++;
		}
	}
	map<char,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	} 
	int s=value(sst,mp);
	//cout<<s;
	for(int i=0;i<st.length()-sst.length();i++){
		cout<<i<<" "<<i+3<<endl;
		int val=value(st.substr(i,i+3),mp);
		cout<<val<<" "<<st.substr(i,i+3)<<" "<<st<<endl;
		if(val==s){
			if(check(st.substr(i,i+3),sst)==true){
				cout<<st.substr(i,i+3)<<" ";
			}
		}
	}
}
