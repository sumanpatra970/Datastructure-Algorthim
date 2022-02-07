//program of list stl
#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> v;
	cout<<"pusing back"<<endl;
	v.push_back(78);
	cout<<"pusing back"<<endl;
	v.push_back(85);
	cout<<"size = "<<v.size();
	cout<<"poping"<<endl;
	v.pop_back();
	cout<<"size = ";
	cout<<v.size()<<" ";
	cout<<"empty status "<<v.empty()<<endl;
	cout<<"pusing back"<<endl;
	v.push_back(28);
	cout<<"pusing back"<<endl;
	v.push_back(15);
	cout<<"list = ";
	list<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<"pusing front"<<endl;
	v.push_front(22);
	cout<<"list = ";
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
