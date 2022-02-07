#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string st="abc";
	int n=1;
	stringstream ss;
	ss<<n;
	string str;
	ss>>str;
	st=st+str;
	cout<<st;
	return 0;
}
