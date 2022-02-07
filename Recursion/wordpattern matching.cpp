#include<iostream>
#include<map>
using namespace std;
void solution(string pattern,string str,map<char,string> m,int idx,string op){
	if(idx==pattern.length()){
		if(str.length()==0){
			cout<<op<<endl;
		}
	return ;
	}
	char ch=pattern[idx];
	map<char,string> :: iterator itr;
	itr=m.find(ch);
	if(itr->second.length()!=0){
		string previousmapping=itr->second;
		if(str.length()>=previousmapping.length()){
			string left=str.substr(0,previousmapping.length());
			string rs=str.substr(previousmapping.length(),str.length());
			if(left==previousmapping){
				string op1=op+left+" ";
				solution(pattern,rs,m,idx+1,op1);
			}
		}
	}
	else{
		for(int i=0;i<str.length();i++){
			string ls=str.substr(0,i+1);
			string rs=str.substr(i+1,str.length());
			m[ch]=ls;
			solution(pattern,rs,m,idx+1,op+ls+" ");
			m.erase(ch);
		}
	}
}
int main(){
	string pattern="pep";
	string str="graphfedgraph";
	map<char,string> m;
	m['p']="";
	m['e']="";
	m['p']="";
	int idx=0;
	solution(pattern,str,m,idx,"");
}
