#include<iostream>
using namespace std;
void solve(char a[6][6],string s,int r,int c,string op,int p){
	//cout<<op<<" "<<r<<" "<<c<<endl;
	if(p==s.length()+1){
		return ;
	}
	if(op.compare(s)==0){
		cout<<op<<" ";
		return ;
	}
	char ch=s[p];
	//cout<<"ch "<<ch<<" "<<a[r+1][c]<<endl;
	if(a[r-1][c]==ch){
		solve(a,s,r-1,c,op+ch,p+1);
	}
	if(a[r][c+1]==ch){
		solve(a,s,r,c+1,op+ch,p+1);
	}
	if(a[r+1][c]==ch){
		solve(a,s,r+1,c,op+ch,p+1);
	}
	if(a[r][c-1]==ch){
		solve(a,s,r,c-1,op+ch,p+1);
	}
	return ;
}
int main(){
	char a[6][6]={ {'D','D','D','G','D','D'},
				 {'B','B','D','E','B','S'},
				 {'B','S','K','E','B','K'},
				 {'D','D','D','D','D','E'},
				 {'D','D','D','D','D','E'},
				 {'D','D','D','D','D','G'}};
	int r=6;
	int c=6;
	string ss="GEEKS";
	string op="G";
	int p=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==ss[0]){
				solve(a,ss,i,j,op,p);
			}
		}
	}
	return 0;
}
