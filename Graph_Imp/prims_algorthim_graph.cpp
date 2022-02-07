//program for prims-algorthim for spanning tree
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
	int m,o;
	int min=1000;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(min>b[x][y])
			{
				min=b[x][y];
				m=x;
				o=y;
			}
		}
	}
	int v[10];
	for(int r=0;r<n;r++)
	{
		v[r]=0;
	}
	int s[10];
	int l=0;
	s[l]=m;
	l++;
	s[l]=o;
	l++;
	int k;
	v[m]=1;
	v[o]=1;
	while(l<n)
	{
		k=0;
		while(k<l)
		{
			int c=s[k];
			min=I-1;
			for(int ii=0;ii<n;ii++)
			{
				if(min>b[c][ii] && v[ii]==0)
				{
					min=b[c][ii];
					m=c;
					o=ii;
				}
			}
			k++;
		}
		v[m]=1;
		v[o]=1;
		s[l]=o;
		l++;
	}
	cout<<"spanning tree is "<<endl;
	for(int u=0;u<n;u++)
	{
		cout<<u<<" "<<s[u]<<endl;
	}
	return 0;
}
