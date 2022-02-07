#include<iostream>
using namespace std;
int ispallindrome(string a,int i,int j){
	if(i>=j)
	{
		return 0;
	}
	if(i==0 && j==4)
	{
		return 0;
	}
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
int mcm(string a,int i,int j){
	int min=10000;
	cout<<"mcm called for"<<i<<" "<<j<<endl;
	if(ispallindrome(a,i,j))
	{
		return 0;
	}
	if(i>=j)
	{
		return 0;
	}
	for(int k=i;k<=j-1;k++)
	{
		cout<<"k "<<k;
		int temp=1+mcm(a,i,k)+mcm(a,k+1,j);
		if(temp<min)
		{
			min=temp;
		}
	}
	return min;
}
int main(){
	string a="nitin";
	int n=5;
	int i=0;
	int j=4;
	string b="itin";
	cout<<ispallindrome(a,1,4)<<" ";
	cout<<"min cost of mcm is "<<mcm(a,i,j);
}
