//program for graph using adjcent-matrix
#include<iostream>
using namespace std;
int  main(){
	int a[5][5];
	int n=5;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			a[x][y]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<endl;
		int c,s;
		s=1;
		while(s!=0)
		{
			cout<<"enter the adjcent node for "<<i;
			cin>>c;
			a[i][c]=1;
			cout<<"enter 0 to discontinue";
			cin>>s;
		}
	}
	cout<<"matrix is "<<endl;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
