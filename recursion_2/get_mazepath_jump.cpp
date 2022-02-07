#include<iostream>
#include<vector>
using namespace std;
void printmazepath(int sr,int sc,int dr,int dc,string op){
	if(sc==dc && sr==dr){
		cout<<op<<" "<<endl;
		return ;
	}
	for(int ms=1;ms<=dc-sc;ms++){
		char ch=ms;
		printmazepath(sr,sc+ms,dr,dc,op+"h"+ch);
	}
	for(int ms=1;ms<=dr-sr;ms++){
		char ch=ms;
		printmazepath(sr+ms,sc,dr,dc,op+"v"+ch);
	}
	for(int ms=1;ms<=dr-sr && ms<=dc-sc;ms++){
		char ch=ms;
		printmazepath(sr+ms,sc+ms,dr,dc,op+"d"+ch);
	}
	return ;
}
int main(){
	printmazepath(1,1,3,3,"");
	return 0;
}
