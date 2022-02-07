//program to change case of char in the string
#include<iostream>
using namespace std;
int main(){
	char s[6]="sumAN";
	int n=6;
	cout<<"string is "<<s<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i]>64 && s[i]<91)
		{
			s[i]=s[i]+32;
		}
		else
		{
			s[i]=s[i]-32;
		}
	}
	cout<<"casechanged string is "<<s;
	return 0;
}
