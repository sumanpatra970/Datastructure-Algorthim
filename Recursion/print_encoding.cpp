#include<iostream>
using namespace std;
void printencoding(string str,string op){
	if(str.length()==0){
		return ;
	}
	else if(str.length()==1){
		if(str[0]=='0'){
			return ;
		}
		else{
			char ch=str[0];
			op=op+ch;
			cout<<op<<" ";
			return ;
		}
	}
	else{
		if(str[0]=='0'){
			return ;
			}
		else{
			char ch=str[0];
			printencoding(str.substr(1,str.length()),op+ch);
		}
		printencoding(str.substr(2,str.length()),op+str[0]+str[1]);
	}
}
int main(){
	string str ="123";
	printencoding(str,"");
}
