//program to print all the possible subsets which sum is equal to target
#include<iostream>
#include<vector>
using namespace std;
void get(int *a,vector<int> op,int sum,int n,int tar){
	if(n==-1)
	{
		if(sum==100)
		{
			vector<int> :: iterator it;
			for(it=op.begin();it!=op.end();it++){
			cout<<*it<<" ";
		}
			cout<<endl;
		}
		return ;
	}
	int i=a[n];
	vector<int> op1;
	vector<int> :: iterator itr;
	for(itr=op.begin();itr!=op.end();itr++)
	{
		op1.push_back(*itr);
	}
	op1.push_back(i);
	get(a,op1,sum+i,n-1,tar);
	get(a,op,sum,n-1,tar);
}
int main(){
	int a[5]={10,20,30,40,50};
	int tar=100;
	int sum=0;
	int n=4;
	vector<int> v;
	v.push_back(0);
	cout<<"target is 100 "<<endl;
	cout<<"subsets are "<<endl;
	get(a,v,sum,n,tar);
	return 0;
}
