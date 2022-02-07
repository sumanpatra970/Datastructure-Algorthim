#include<iostream>
using namespace std;
int main(){
	string a="aabcc";
	int n=a.length();
	int i=0;
	while(i!=n-1){
		if(a[i]==a[i+1]){
			a=a.substr(0,i)+a.substr(i+1,a.length());
			n--;
		}
		else{
			i++;
		}
	}
	cout<<a;
	return 0;
}
