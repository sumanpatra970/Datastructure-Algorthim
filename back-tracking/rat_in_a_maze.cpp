//program to say whether rat can reach final pt or not
#include<iostream>
using namespace std;
	int check(int t[4][4],int i,int j)
	{
		if(i==j==3)
		{
			return 1;
		}
		if(t[i][j]==1 && i>=0 && j>=0 && i<4 && j<4)
		{
			return 1;
		}
		return 0;
	}
	int go(int t[4][4],int s[4][4],int i,int j){
		if(i==3 && j==3)
		{
			s[i][j]=1;
			cout<<"rat reached"<<endl;
			return 0;
		}
		if(i>3 || j>3)
		{
			return 0;
		}
		if(check(t,i,j)==true)
		{
			s[i][j]=1;
		}
		if(go(t,s,i+1,j))
		{
			return true;
		}
		if(go(t,s,i,j+1))
		{
			return 1;
		}
		return 0;		
	}
int main(){
	int t[4][4]={{1,1,1,0},{0,1,0,0},{0,1,1,1},{1,0,0,1}};
	int s[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	go(t,s,0,0);
	return 0;
}
