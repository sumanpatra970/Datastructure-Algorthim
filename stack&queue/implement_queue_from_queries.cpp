#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	int n;
	n=5;
	queue<int> q;
	for(int i=0;i<5;i++){
		cout<<"enter query";
		string s;
		cin>>s;
		if(s[0]=='1'){
			char ch=s[1];
			int c=ch-'0';
			q.push(c);
		}
		else{
			cout<<q.front();
			q.pop();
		}
	}
	return 0;
}
