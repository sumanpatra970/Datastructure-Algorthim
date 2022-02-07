//program is to count no of elements in an array
#include<iostream>
using namespace std;
int main(){
	int a[4]={1,3,4,0};
	cout<<"guess the count of elements in array ";
	int c;
	cin>>c;
	int count=0;
	for(int i=0;i<4;i++)
	{
		count++;
	}
	if(c==count)
	{
		cout<<"wow,you guessed correct";
	}
	else
	{
		cout<<"oh no! you guessed incorrect, correct ans is "<<count;
	}
	return 0;
}
