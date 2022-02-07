//program to implement stack using array
#include<iostream>
using namespace std;
class stackk{
	public:
	int a[10];
	int top=-1;
	int n=10;
	int minn=80000;
	int size=0;
	void push(int *a,int val){
		if(top==n-1)
		{
			cout<<"sorry stack overflow";
		}
		else
		{
			top++;
			a[top]=val;
			if(val<minn){
				minn=val;
			}
		}
	}
	int pop(int *a){
		if(top==-1)
		{
			cout<<"stack underflow";
			return -1;
		}
		else
		{
			int v;
			v=a[top];
			top--;
			size--;
			if(v==minn){
				minn=8000;
				for(int i=top;i>=0;i--){
					minn=min(minn,a[i]);
				}
			}
			return v;	
		}
	}
};
int main(){
	stackk st;
	st.push(st.a,2);
	st.push(st.a,3);
	st.push(st.a,6);
	st.push(st.a,5);
	st.push(st.a,1);
	cout<<st.minn;
	cout<<endl;
	cout<<st.pop(st.a);
	cout<<endl;
	for(int i=0;i<=st.top;i++){
		cout<<st.a[i]<<" ";
	}
	cout<<endl<<st.minn;
	return 0;
}
