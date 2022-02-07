#include<iostream>
using namespace std;
int main(){
	string t="abxabcabcabz";
	string p="abcaby";
	int i=0;
	int j=0;
	int a[p.length()];
	int x=0;
	int y=1;
	a[0]=0;
	while(y!=p.length()){
		if(p[x]!=p[y]){
			a[y]=0;
			y++;
		}
		else{
			a[y]=x+1;
			x++;
			y++;
		}
	}
	for(int k=0;k<p.length();k++){
		cout<<a[k]<<" ";
	}
	int f=0;
	//cout<<endl<<"ok"<<endl;
	while(i!=t.length()){
		cout<<i<<" "<<j<<endl;
		if(t[i]==p[j]){
			i++;
			j++;
		}
		else{
			int index=a[j-1];
			if(index==0){
				j=0;
			}
			else{
				j=index+1;	
			}
			i++;
		}
		if(i==t.length() && j==p.length()){
			cout<<"found"<<endl;
			f=1;
		}
	}
	if(f==0){
		cout<<"not found";
	}
	return 0;
}
