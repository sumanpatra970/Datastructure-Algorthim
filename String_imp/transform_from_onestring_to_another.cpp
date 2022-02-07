#include<iostream>
using namespace std;
void solve(string s1,string s2,int i,int j,int n){
	int r=0;
	while(i>=0 && j>=0){
		if(s1[i]==s2[j]){
			i--;
			j--;
		}
		else{
			cout<<s1[i]<<" "<<s2[j]<<endl;
			char ch=s2[j];
			while(s1[i]!=ch){
					r++;
					char chh=s1[i];
					s1=s1.substr(0,i)+s1.substr(i+1,s1.length());
					s1=chh+s1;
					cout<<s1<<endl;
				}
			j--;
			i--;	
		}
	}
	cout<<r;
	return ;
}
int main(){
	string s1="ACBD";
	string s2="CBAD";
	solve(s1,s2,2,2,s1.length());
	return 0;
}
