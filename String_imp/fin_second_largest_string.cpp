#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int> mp;
	string a[6]={"aaa","bbb","aaa","bbb","aaa","ccc"};
	for(int i=0;i<6;i++){
		if(mp.find(a[i])!=mp.end()){
			mp[a[i]]++;
		}
		else{
			mp[a[i]]=1;
		}
	}
	map<string,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	int maxx=-1;
	int minn=8000;
	for(itr=mp.begin();itr!=mp.end();itr++){
		maxx=max(maxx,itr->second);
		minn=min(minn,itr->second);
	}
	int mmax=-1;
	for(itr=mp.begin();itr!=mp.end();itr++){
		if(itr->second!=maxx){
			mmax=max(itr->second,mmax);
		}
	}
	cout<<mmax;
	return 0;
}
