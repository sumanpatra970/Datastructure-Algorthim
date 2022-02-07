#include<iostream>
using namespace std;
void printzigzag(int n){
	if(n==0){
		return ;
	}
	cout<<"pre "<<n<<endl;
	printzigzag(n-1);
	cout<<"in "<<n<<endl;
	printzigzag(n-1);
	cout<<"post "<<n<<endl;
}
int main(){
	int n;
	cout<<"enter n ";
	cin>>n;
	printzigzag(n);
}
