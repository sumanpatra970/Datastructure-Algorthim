//program to find no of vowel and consonant in a string
#include<iostream>
using namespace std;
int main(){
	char s[10];
	cout<<"enter string ";
	cin>>s;
	int k=0;
	for(int c=0;s[c]!=NULL;c++)
	{
		k++;
	}
	int n=10;
	int vc=0,cc=0;
	for(int i=0;i<k;i++){
		if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
		{
			vc++;
		}
		else
		{
			cc++;
		}
	}
	cout<<"no of vowel in string is "<<vc<<endl;
	cout<<"no of consonant in string is "<<cc;
	return 0;
}
