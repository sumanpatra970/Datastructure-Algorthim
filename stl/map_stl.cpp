//program of map stl
#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string>m;
	cout<<"creating map"<<endl;
	m.insert(pair<int,string>(1,"suman"));
	m.insert(pair<int,string>(2,"sovan"));
	m.insert(pair<int,string>(3,"shlok"));
	cout<<"datas in map are"<<endl;
	map<int,string>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	map<int,string>::iterator itr1;
	cout<<"finding 2"<<endl;
	itr1=m.find(2);
	cout<<itr1->first<<" "<<itr1->second;
	return 0;
}
