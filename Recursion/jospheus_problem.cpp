//program of josephus problem
#include<iostream>
#include<vector>
using namespace std;
int jospheus(vector<int> a,int index, int k,int &ans,int counter){
	if(counter==1)
	{
		ans = a[0];
		return ans;
	}
	index=(index+k)%counter;
	a.erase(a.begin()+index);
	vector<int> :: iterator itr;
	jospheus(a,index,k,ans,counter-1);
	return ans;
}
int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	int n=5;
	int k=3;
	int ans=0;
	cout<<"jospehus's position = "<<jospheus(a,0,k-1,ans,5);
}
