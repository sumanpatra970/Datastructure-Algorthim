#include<iostream>
using namespace std;
int main(){
	int s;
	cout<<"no of days required to survive";
	cin>>s;
	int n;
	cout<<"enter maximum food you can take everyday";
	cin>>n;
	int m;
	cout<<"min food required each day to survive";
	cin>>m;
	if(n<m){
		cout<<"0";
	}
	else{
		cout<<s*m/n;
	}
	return 0;
}
