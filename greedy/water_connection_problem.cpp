#include<iostream>
#include<vector>
#include<map>
using namespace std;
string solve(int v,map<int,int> mp,string op){
	if(mp.find(v)!=mp.end()){
		char ch=mp[v]+'0';
		op=solve(mp[v],mp,op+ch);
		return op;
	}
	else{
		return op;
	}
}
int main(){
	int a[6]={7,5,4,2,9,3};
	int b[6]={4,9,6,8,7,1};
	vector<int> v;
	map<int,int> mp;
	for(int i=0;i<6;i++){
		mp[a[i]]=b[i];
	}
	for(int i=0;i<6;i++){
		int f=0;
		for(int j=0;j<6;j++){
			if(a[i]==b[j]){
				f=1;
			}
		}
		if(f==0){
			v.push_back(i);
		}
	}
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;
	int nn=0;
	while(v.size()!=nn){
		int d=v[nn];
		int x=a[d];
		string op="";
		string oop;
		char ch=x+'0';
		oop=solve(x,mp,op+ch);
		cout<<oop<<endl;
		nn++;
	}
	cout<<"done";
	return 0;
}
