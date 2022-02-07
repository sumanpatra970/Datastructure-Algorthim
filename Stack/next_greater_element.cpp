#include<iostream>
#include<stack>
using namespace std;
int main(){
	int a[7]={2,4,5,1,3,7,9};
	int n=7;
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		if(i==n-1){
			cout<<a[i]<<"->"<<"-1";
			st.push(a[i]);
		}
		else{
			while(st.top()<a[i]){
				st.pop();
			}
			cout<<a[i]<<"->"<<st.top();
			st.push(a[i]);
		}
		cout<<endl;
	}
	return 0;
}
