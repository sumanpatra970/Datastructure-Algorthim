#include<iostream>
#include<vector>
using namespace std;
int main(){
	string t="ababca";
	string s="aaabbc";
	int i=0;
	int n=s.length();
	int kk=0;
	int r;
	int k=2;
	vector<int> v;
	while(i<n){
		if(s[i]==s[i+1]){
			kk++;
		}
		else{
			r=kk+1;
			kk=0;
			v.push_back(r);
		}	
		i++;
	}
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<" ";
	}
	while(k>0){
		int maxx=-1;
		for(itr=v.begin();itr!=v.end();itr++){
			maxx=max(maxx,*itr);
		}
		for(int ii=0;ii<v.size();ii++){
			if(maxx==v[ii]){
				v[ii]--;
				break;			
			}
		}
		k--;
	}
	int sum=0;
	for(itr=v.begin();itr!=v.end();itr++){
		int kl=*itr;
		sum=sum+kl*kl;
	}
	cout<<sum;
	return 0;
}
