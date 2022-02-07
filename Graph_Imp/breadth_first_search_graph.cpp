//program for BFS of graph
#include<iostream>
using namespace std;
int main(){
	int b[5][5]={{0,1,1,1,0},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,1},{1,0,0,0,0}};
	int n=5;
	int q[6];
	int f=0;
	int l=0;
	int v[5];
	for(int l=0;l<n;l++)
	{
		v[l]=0;
	}
	int i=0;
	q[l]=i;
	l++;
	cout<<"BFS of graph is : ";
	while(f!=l)
	{
		i=q[f];
		if(v[i]==0)
		{
			cout<<i<<" ";
		}
		v[i]=1;
		for(int j=0;j<n;j++)
		{
			if(b[i][j]==1 && v[j]==0){
				v[j]=1;
				q[l]=j;
				l++;
				cout<<j<<" ";
			}			
		}
		f++;
	}
	return 0;
}
