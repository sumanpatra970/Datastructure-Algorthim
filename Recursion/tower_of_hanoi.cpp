//program for tower of hanoi for n=3
#include<iostream>
using namespace std;
void toh(int n,int t1,int t2,int t3){
	if(n==0)
	{
		return;
	}
	toh(n-1,t1,t3,t2);
	cout<<n<<" "<<t1<<"->"<<t2<<endl;
	toh(n-1,t3,t2,t1);
}
int main(){
	int n=3;
	int t1=1;
	int t2=2;
	int t3=3;
	toh(n,t1,t2,t3);
	return 0;
}
