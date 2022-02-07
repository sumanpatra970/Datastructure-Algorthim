#include<iostream>
using namespace std;
class stackk{
	public:
	char a[8];
	int top=-1;
	int n=14;
	void push(char *a,char val)
	{
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
	void pop(char *a)
	{
		if(top==-1)
		{
			cout<<"stack underflow";
		}
		else
		{
			char v;
			v=a[top];
			top--;	
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
};
int main(){
	stackk st;
	char s[14]="((a+b)*(c-d))";
	for(int i=0;i<14;i++)
	{
		if((s[i])=='(')
		{
			st.push(st.a,'(');		
		}
		if((s[i])==')')
		{
			st.pop(st.a);
		}
	}
	if(st.top==-1)
	{
		cout<<"paranthesis matched";
	}
	else
	{
		cout<<"paranthesis not matched";
	}
	return 0;
}
