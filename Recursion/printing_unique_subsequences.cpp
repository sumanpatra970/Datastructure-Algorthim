//program to print all unique subsequence
#include<iostream>
using namespace std;
class kam{
	public:
	string s[10];
	int l=0;
	int print(string ip,string op,int n){
		if(n==0)
		{
			int count=0;
			for(int x=0;x<l;x++)
			{
				if(s[x]==op)
				{
					break;
				}
				else
				{
					count++;
				}
			}
			if(count==l)
			{
				s[l]=op;
				l++;		
			}
			return 1;
		}
		string op1,op2;
		op1=ip[n-1]+op;
		op2=op;
		print(ip,op1,n-1);
		print(ip,op2,n-1);
		return 1;
	}
};

int main(){
	string ip="aba";
	string op="";
	int n=3;
	kam k;
	cout<<"string is = "<<ip<<endl;
	cout<<"printing unique subsequences = ";
	k.print(ip,op,n);
	for(int t=0;t<k.l;t++)
	{
		cout<<k.s[t]<<" ";
	}
	return 0;
}
