#include<iostream>
#include<vector>
using namespace std;
int josephus(vector<int> v,int idx,int k,int &ans,int n){
	if(n==1)
		{
			ans=v[idx];
			return ans;
		}	
	idx=(idx+k-1)%n;
	v.erase(v.begin()+idx);
	josephus(v,idx,k,ans,n-1);
	return ans;
}
int main(){
	vector<int> v;
	for(int i=1;i<6;i++){
		v.push_back(i);
	}
	int ans=-1;
	cout<<josephus(v,0,3,ans,5);
	return 0;
}
