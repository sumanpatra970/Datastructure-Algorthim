#include<iostream>
#include<stack>
using namespace std;
int main(){
	int a[5]={1,3,4,7,2};
	int ls[5];
	stack<int> st;
	for(int i=4;i>=0;i--){
		if(st.empty()){
			st.push(i);
			ls[i]=5;	
		}
		else if(a[st.top()]<a[i]){
			ls[i]=st.top();
			st.push(i);
		}
		else{
			while(!st.empty() && a[st.top()]>=a[i]){
				st.top();
				st.pop();
			}
			if(st.empty()){
				ls[i]=5;
			}
			else{
				ls[i]=st.top();	
			}
			st.push(i);
		}
	}
	for(int j=0;j<5;j++){
		cout<<ls[j]<<" ";
	}
	cout<<endl;
	int ps[5];
	stack<int> stt;
	for(int i=0;i<5;i++){
		if(stt.empty()){
			stt.push(i);
			ps[i]=-1;	
		}
		else if(a[stt.top()]<a[i]){
			ps[i]=stt.top();
			stt.push(i);
		}
		else{
			while(!stt.empty() && a[stt.top()]>a[i]){
				stt.top();
				stt.pop();
			}
			if(stt.empty()){
				ps[i]=-1;
			}
			else{
				ps[i]=stt.top();	
			}
			stt.push(i);
		}
	}
	for(int j=0;j<5;j++){
		cout<<ps[j]<<" ";
	}
	for(int kl=0;kl<5;kl++){
		a[kl]=(ls[kl]-ps[kl]-1)*a[kl];
	}
	cout<<endl;
	for(int j=0;j<5;j++){
		cout<<a[j]<<" ";
	}
}
