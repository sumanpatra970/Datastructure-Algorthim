#include<iostream>
#include<map>
using namespace std;
bool check(string s1,string s2){
	map<char,int> mp;
	for(int i=0;i<s1.length();i++){
		if(mp.find(s1[i])==mp.end()){
			mp[s1[i]]=1;
		}
		else{
			mp[s1[i]]++;
		}
	}
	for(int i=0;i<s2.length();i++){
		if(mp.find(s2[i])==mp.end()){
			return false;
		}
		else{
			mp[s2[i]]--;
		}
	}
	map<char,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		if(itr->second>0){
			return false;
		}
	}
	return true;
}
int main(){
	string s[5]={"rop","por","tax","xat","lp"};
	int v[5]={0,0,0,0,0};
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(check(s[i],s[j]) && v[j]==0){
				v[j]=1;
				cout<<s[i]<<" "<<s[j]<<" ";
			}
		}
	}
}
