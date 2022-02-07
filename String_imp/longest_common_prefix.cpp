//program to print lcs using top-down
#include<iostream>
#include<stack>
using namespace std;
class program{
	public:
	int t[7][7];
	int lcs(string x,string y,int m,int n){
		for(int ii=0;ii<7;ii++)
		{
			t[0][ii]=0;
		}
		for(int jj=0;jj<7;jj++)
		{
			t[jj][0]=0;
		}
		for(int i=1;i<7;i++)
		{
			for(int j=1;j<7;j++)
			{
				if(x[i-1]==y[j-1])
				{
					t[i][j]=1+t[i-1][j-1];
				}
				else
				{
					t[i][j]=max(t[i][j-1],t[i-1][j]);
				}
			}
		}	
	}
};
int main(){
	program p;
	stack<string> v;
	v.push("flower");
	v.push("flowgr");
	v.push("flightr");
	while(v.size()>1){
		string x=v.top();
		v.pop();
		string y=v.top();
		v.pop();
		//cout<<x<<" "<<y<<endl;
		for(int i=0;i<x.length()+1;i++)
		{
			for(int j=0;j<y.length()+1;j++)
			{
				p.t[i][j]=0;
			}
		}
		p.lcs(x,y,x.length(),y.length());
		string op;
		int s=x.length();
		int t=y.length();
		while(s>0 && t>0)
		{
			if(x[s-1]==y[t-1])
			{
				op=op+x[s-1];
				s--;
				t--;
			}
			else
			{
				if(p.t[s-1][t]>p.t[s][t-1])
				{
					s--;
				}
				else
				{
					t--;
				}
			}	
		}
		cout<<op<<" ";
		for(int i=0;i<op.length()/2;i++){
			char temp=op[op.length()-1-i];
			op[op.length()-1-i]=op[i];
			op[i]=temp;
			
		}
		//cout<<op<<endl;
		v.push(op);
	}
	cout<<v.top();
	return 0;
}
