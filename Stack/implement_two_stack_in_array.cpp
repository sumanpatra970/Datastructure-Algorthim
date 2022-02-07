#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> st1;
	stack<int> st2;
	int a[6]={5,6,7,8,9,2};
	for(int i=0;i<6;i++){
		int k;
		cout<<"enter which stack (1/2)";
		cin>>k;
		if(k==1){
			st1.push(a[i]);
		}
		else{
			st2.push(a[i]);
		}
	}
	cout<<"now pop time";
	int p=1;
	while(p!=0){
		cout<<"enter which stack to pop";
		int l;
		cin>>l;
		if(l==1){
			if(!st1.empty()){
				cout<<st1.top();
				st1.pop();
			}
			else{
				cout<<"-1";
			}
		}
		else{
			if(!st2.empty()){
				cout<<st1.top();
				st1.pop();
			}
			else{
				cout<<"-1";
			}
		}
		cout<<"interested to pop";
		cin>>p;
	}
	return 0;
}
