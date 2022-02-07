#include<iostream>
#include<stack>
using namespace std;
int main(){
	int c1=0;
	int c2=0;
	stack<char> stck;
	string st="}{{}}{{{";
	int n=st.length();
	if(n%2!=0){
		cout<<"-1";
	}
	else{
		for(int i=0;i<n;i++){
			//cout<<c1<<" "<<c2<<endl;
			if(st[i]=='{'){
				stck.push('{');
				c1++;
			}
			else if(st[i]=='}' && stck.size()!=0){
				stck.pop();
				c1--;
			}
			else{
				c2++;
			}
		}
		cout<<c1<<" "<<c2<<endl;
		int c=c1/2+1;
		int d=c2/2+1;
		int res=c+d;
		cout<<res;
	}
	return 0;	
}
