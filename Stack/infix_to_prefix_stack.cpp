//program is to convert infix to prefix using stack
#include<iostream>
using namespace std;
class stackk{
	public:
	char a[8];
	int top=-1;
	int n=14;
	void push(char *a,char val){
		if(top==n-1)
		{
			cout<<"stack overflow";
		}
		else
		{
			top++;
			a[top]=val;
		}
	}
	int pop(char *a){
		if(top==-1)
		{
			cout<<"stack underflow";
		}
		else
		{
			char v;
			v=a[top];
			top--;
			return v;		
		}
	}
	void is_full(){
		if(top>=n-1)
		{
			cout<<"stack is full";
		}
		else
		{
			cout<<"stack is not full";
		}
	}
	void is_empty(){
		if(top==-1)
		{
			cout<<"stack is empty";
		}
		else
		{
			cout<<"stack is not empty";
		}
	}
	int pre(char x){
		if(x=='+' || x=='-')
		{
		 	return 1;
		}
		else if(x=='*' || x=='/')
		{
		 	return 2;
		}
		else
		{
		 	return 0;
		}
	}
	int isOperand(char x){
		if(x=='+' || x=='-' || x=='*' || x=='/')
		{
			return 0;
		}
		else
		{
			return 1;	
		}
			 	
	}
	void infix_prefix(char *infix,int n){
		char postfix[10];
		int l=0;
		for(int i=0;i<n;i++)
		{
			if(isOperand(infix[i]))
			{
				postfix[l]=infix[i];
				l++;
			}
			else
			{
				if(infix[i]=='(')
				{
					push(a,'(');
				}
				else if(infix[i]==')')
				{
					while(a[top]!='(')
					{
						char t=pop(a);
						postfix[l]=t;
						l++;	
					}
				}
				else if(pre(infix[i])>pre(a[top]))
				{
					push(a,infix[i]);
				}
				else if(pre(infix[i])<pre(a[top]))
				{
					while(top!=-1)
					{
						char y=pop(a);
						postfix[l]=y;
						l++;	
					}
					push(a,infix[i]);
				}
				else
				{
					cout<<"approach to programmer";
				}
			}
		}
		while(top!=-1)
		{
			postfix[l]=pop(a);
			l++;
		}
		for(int u=l-1;u>=0;u--)
		{
			cout<<postfix[u];
		}
	}
};
int main(){
	stackk st;
	char s[8]="a*b-c/o";
	char ss[8];
	for(int v=0;v<8;v++)
	{
		ss[v]=s[v];
	}
	cout<<"infix is "<<s<<endl;
	cout<<"prefix is ";
	st.infix_prefix(ss,8);
	return 0;
}
