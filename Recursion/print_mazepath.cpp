#include<iostream>
#include<vector>
using namespace std;
vector<string> printmazepath(int sr,int sc,int dr,int dc){
	cout<<"sr "<<sr<<"sc "<<sc<<"dr "<<dr<<"dc "<<dc<<endl;
	if(sc==dc && sr==dr){
		vector<string> v2;
		v2.push_back("");
		return v2;
	}
	vector<string> vv;
	for(int ms=1;ms<=dc-sc;ms++){
		vector<string> v1;
		vector<string> :: iterator itr;
		v1=printmazepath(sr,sc+ms,dr,dc);
		for(itr=v1.begin();itr!=v1.end();itr++)
		{
			vv.push_back("h"+ms+*itr);
		}
		vector<string> :: iterator itrr;
		for(itrr=vv.begin();itrr!=vv.end();itrr++)
		{
			cout<<*itrr<<"";
		}
	}
	for(int ms=1;ms<=dr-sr;ms++){
		vector<string> v1;
		vector<string> :: iterator itr;
		v1=printmazepath(sr+ms,sc,dr,dc);
		for(itr=v1.begin();itr!=v1.end();itr++)
		{
			vv.push_back("v"+ms+*itr);
		}
	}
	for(int ms=1;ms<=dr-sr && ms<=dc-sc;ms++){
		vector<string> v1;
		vector<string> :: iterator itr;
		v1=printmazepath(sr+ms,sc+ms,dr,dc);
		for(itr=v1.begin();itr!=v1.end();itr++)
		{
			vv.push_back("d"+ms+*itr);
		}
	}
	return vv;
}
int main(){
	vector<string> v;
	v=printmazepath(1,1,3,3);
	vector<string> :: iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
}
