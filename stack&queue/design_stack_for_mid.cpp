//program to implement stack using array
#include<iostream>
using namespace std;
class stackk{
	public:
	int a[10];
	int top=-1;
	int n=10;
	int mid=0;
	int size=0;
	void push(int *a,int val){
		if(top==n-1)
		{
			cout<<"sorry stack overflow";
		}
		else
		{
			top++;
			size++;
			if(size==1){
				mid=1;
			}
			if(size%2==0){
				mid++;
			}else{
				mid=mid;
			}
			a[top]=val;
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
			if(size%2!=0){
				mid--;
			}
			else{
				mid=mid;
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
	cout<<st.mid;
	st.pop(st.a);
	cout<<endl<<st.mid;
	return 0;
}
