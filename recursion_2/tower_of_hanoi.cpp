#include<iostream>
using namespace std;
void toh(int n,int t1,int t2,int t3){
	if(n==0){
		return;
	}
	toh(n-1,t1,t3,t2);
	cout<<n<<"[ "<<t1<<" -> "<<t2<<" ]"<<endl;
	toh(n-1,t3,t2,t1);
}
int main(){
	int a,b,c;
	a=1;
	b=2;
	c=3;
	toh(3,a,b,c);
	return 0;
}
