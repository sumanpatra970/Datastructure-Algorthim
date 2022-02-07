#include<iostream>
using namespace std;
int canweplacevertically(char a[3][3],string str,int i,int j){
	if(i-1>=0 && a[i-1][j]!='-'){
		cout<<"checkop1 "<<i<<" "<<j;
		return false;
	}
	else if(i+str.length()<3 && a[i+str.length()][j]!='-'){
		cout<<"checkop2 "<<i<<" "<<j;
		return false;
	}
	for(int jj=0;jj<3;jj++){
		if(i+jj>=3){
			cout<<"checkop3 "<<i<<" "<<j;
			return false;
		}
	}
	return true;
}
bool * placevertically(char a[3][3],string str,int i,int j){
	bool *v=new bool[10];
	for(int ii=0;ii<str.length();ii++){
		if(a[i+ii][j]=='+'){
			v[ii]=true;
			a[i+ii][j]=str[ii];
		}
	}
	return v;
}
void unplacevertically(char a[3][3],string str,int i,int j,bool *v){
	for(int jj=0;jj<str.length();jj++){
		if(v[jj]==true){
			a[i+jj][j]='+';	
		}
	}
}
int canweplacehorizontally(char a[3][3],string str,int i,int j){
	if(j-1>=0 && a[i][j-1]!='-'){
		return false;
	}
	else if(j+str.length()<=3 && a[i][j+str.length()]!='-'){
		return false;
	}
	for(int jj=0;jj<3;jj++){
		if(j+jj>=3){
			return false;
		}
	}
	cout<<"check"<<i<<" "<<j;
	return true;
}
bool* placehorizontally(char a[3][3],string str,int i,int j){
	bool *v=new bool[10];
	for(int ii=0;ii<str.length();ii++){
		if(a[i][j+ii]=='+'){
			v[ii]=true;
			a[i][j+ii]=str[ii];
		}
	}
	return v;
}
void unplacehorizontally(char a[3][3],string str,int i,int j,bool *v){
	for(int jj=0;jj<str.length();jj++){
		if(v[jj]==true){
			a[i][j+jj]='+';	
	}
	}
}

void print(char a[3][3],string st[2],int idx){
	if(idx>=2){
		for(int s=0;s<3;s++){
			for(int t=0;t<3;t++){
				cout<<a[s][t]<<" ";
			}
			cout<<endl;
		}
		cout<<"ok";
		return;
	}
	string str=st[idx];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]=='+'){
				cout<<i<<" "<<j<<endl;
				if(canweplacehorizontally(a,str,i,j)){
					bool *b;
					cout<<"horizontal"<<i<<" "<<j<<endl;
					b=placehorizontally(a,str,i,j);
						for(int s=0;s<3;s++){
			for(int t=0;t<3;t++){
				cout<<a[s][t]<<" ";
			}
			cout<<endl;
		}
					print(a,st,idx+1);
					unplacehorizontally(a,str,i,j,b);
				}
				if(canweplacevertically(a,str,i,j)){
					cout<<"vertical"<<i<<" "<<j<<endl;
					bool *c;
					c=placevertically(a,str,i,j);
						for(int s=0;s<3;s++){
			for(int t=0;t<3;t++){
				cout<<a[s][t]<<" ";
			}
			cout<<endl;
		}
					print(a,st,idx+1);
					unplacevertically(a,str,i,j,c);
				}
			}
		}
	}
}
int main(){
	string st[2];
	char a[3][3];
	a[0][0]='-';
	a[0][2]='-';
	a[2][0]='-';
	a[2][2]='-';
	a[0][1]='+';
	a[1][0]='+';
	a[1][1]='+';
	a[1][2]='+';
	a[2][1]='+';
	st[0]="and";
	st[1]="ant";
	int idx=0;
	print(a,st,idx);
		for(int s=0;s<3;s++){
			for(int t=0;t<3;t++){
				cout<<a[s][t]<<" ";
			}
			cout<<endl;
		}
	return 0;
}
