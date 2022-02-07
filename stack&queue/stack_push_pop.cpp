//program to implement stack using array
#include<iostream>
using namespace std;
class stackk{
	public:
	int a[10];
	int top=-1;
	int n=10;
	void push(int *a,int val){
		if(top==n-1)
		{
			cout<<"sorry stack overflow";
		}
		else
		{
			top++;
			a[top]=val;
		}
	}
	int pop(int *a){
		if(top==-1)
		{
			cout<<"stack underflow";
			return 0;
		}
		else
		{
			int v;
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
	int ttop()
	{
		return a[top];
	}
};
int main(){
	stackk st;
	cout<<"enter element to push ";
	int a1;
	cin>>a1;
	st.push(st.a,a1);
	cout<<"enter element to push ";
	int a2;
	cin>>a2;
	st.push(st.a,a2);
	cout<<"top element in stack is ";
	cout<<st.ttop();
	cout<<"poping done, poped element "<<st.pop(st.a)<<endl;
	cout<<"top element in stack is ";
	cout<<st.ttop();
	cout<<"empty status check ";
	st.is_empty();
	cout<<endl;
	cout<<"full status check ";
	st.is_full();
	return 0;
}
