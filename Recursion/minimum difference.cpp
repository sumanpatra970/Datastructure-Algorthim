#include<iostream>
#include<vector>
using namespace std;
void solution(int a[],int idx,vector<int> set1,vector<int> set2,int soset1,int soset2){
	if(idx==4){
		vector<int>::iterator itr1;
		for(itr1=set1.begin();itr1!=set1.end();itr1++){
			cout<<*itr1;
		}
		cout<<"|";
		vector<int>::iterator itr2;
		for(itr2=set2.begin();itr2!=set2.end();itr2++){
			cout<<*itr2;
		}	
		cout<<endl;
		return ;
	}
	cout<<set1.size()<<" "<<set2.size()<<endl;
	if((set1.size()+1)<3){
		set1.push_back(a[idx]);
		solution(a,idx+1,set1,set2,soset1+a[idx],soset2);
		set1.pop_back();
	}
	if((set2.size()+1)<3){
		set2.push_back(a[idx]);
		solution(a,idx+1,set1,set2,soset1,soset2+a[idx]);
		set2.pop_back();
	}
	return ;
}
int main(){
	int a[4]={1,3,5,7};
	int idx=0;
	vector<int> set1;
	vector<int> set2;
	int soset1=0;
	int soset2=0;
	solution(a,idx,set1,set2,soset1,soset2);
	return 0;
}
