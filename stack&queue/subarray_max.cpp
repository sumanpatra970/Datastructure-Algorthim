#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int> dq;
	int a[5]={2,5,6,7,8};
	int n=5;
	int i=0;
	int j=0;
	int k=2;
	while(j<n){
		if(j-i+1!=k){			
			if(dq.empty()){
				dq.push_front(a[j]);
			}
			else{
				if(dq.front()<a[j]){
					dq.pop_front();
					dq.push_front(a[j]);
				}
				else{
					dq.push_back(a[j]);
				}
			}
			j++;
		}
		else{
			if(dq.front()<a[j]){
					dq.pop_front();
					dq.push_front(a[j]);
				}
				else{
					dq.push_back(a[j]);
				}
				cout<<dq.front();
				if(dq.front()==a[i]){
					dq.pop_front();
				}
				j++;
			i++;
		}
	}
	
}
