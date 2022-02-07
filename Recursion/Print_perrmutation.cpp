#include<iostream>
using namespace std;
void printpermutation(string str,string op,int n){
	cout<<"str "<<str<<"op "<<op<<"n "<<n<<endl;
	if(n==0){
		cout<<"op = "<<op<<" ";
		return ;
	}
	for(int i=0;i<n;i++){
		char ch=str[i];
		cout<<"str "<<str<<"n "<<n<<endl;
		string strl=str.substr(0,i);
		cout<<strl<<" i "<<i<<endl;
		string strr=str.substr(i+1,n);
		cout<<strr<<" i "<<i<<endl;
		printpermutation(strl+strr,op+ch,n-1);
	}
	return ;
}
int main(){
	string str="abc";
	printpermutation(str,"",3);
	return 0;
}
