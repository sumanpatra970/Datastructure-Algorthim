//vector-push_back,pop_back,insert,remove,size,empty
//list-same+push_front,pop_front,front,back
//forwardlist-same
//deque-same as vector but here double ended insertion & deletion
//priority_queue-push,pop,empty,size
//stack-push,pop,empty,size
//set-unique 
//multiset
//map-key-value pair
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
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
	cout<<"vector = ";
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
}

