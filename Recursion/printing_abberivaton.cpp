//program to print all abberivation
#include<iostream>
#include<string>
using namespace std;
void abberivation(string ip,string op,int count,int index){
	if(index==3)
	{
		if(count==0)
		{
			cout<<op<<" ";
			return ;
		}
		else
		{
			cout<<op+(char)(count + '0')<<" ";
			return ;
		}
	}
	string op1;
	string op2;
	op2=op;
	if(count>0)
	{
		op1=op+(char)(count + '0')+ip[index];
	}
	else
	{
		op1=op+ip[index];	
	}
	abberivation(ip,op1,0,index+1);
	abberivation(ip,op2,count+1,index+1);
	return ;
}
int main(){
	string ip="pep";
	string op="";
	int count=0;
	int index=0;
	abberivation(ip,op,count,index);
	return 0;
}
