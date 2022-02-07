//program for kruskal-algorthim for spanning tree
#include<iostream>
using namespace std;
int main(){
	int I=56478;
	int b[7][7]={
					{I,25,I,I,I,5,I},
					{25,I,9,I,I,I,6},
					{I,9,I,10,I,I,I},
					{I,I,10,I,12,I,11},
					{I,I,I,12,I,18,16},
					{5,I,I,I,18,I,I},
					{I,6,I,11,16,I,I}
					};
	int n=7;
	int s[2][7];
	int v[20];
	for(int g=0;g<20;g++)
	{
		v[g]=0;
	}
	int min=I;
	int m,o;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(min>b[i][j])
			{
				min=b[i][j];
				m=i;
				o=j;
			}
		}
	}
	s[0][0]=m;
	s[0][1]=o;
	v[m]=1;
	v[o]=1;
	int p=0;
	int tp=1;
	while(p<n+1)
	{
		min=I;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(min>b[i][j])
				{
					if(v[i]==0 || v[j]==0)
					{
						min=b[i][j];
						m=i;
						o=j;
					}
				}
			}
		}
		v[m]=1;v[o]=1;
		s[tp][0]=m;
		s[tp][1]=o;
		tp++;
		p++;
	}
	cout<<"spanning tree is "<<endl;
	for(int ii=0;ii<n+1;ii++)
	{
		cout<<s[ii][0]<<" "<<s[ii][1]<<endl;
	}
	return 0;
}
