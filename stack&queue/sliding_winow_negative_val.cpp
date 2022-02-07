#include<iostream>
#include<queue>
using namespace std;
int main(){
	int a[6]={-8,5,-6,-1,-2,9};
	int k=2;
	int i=0;
	int j=0;
	int n=6;
	queue<int> q;
	while(j<n){
		if(a[j]<0){
			q.push(a[j]);
		}
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			cout<<q.front();
			q.pop();
			i++;
			j++;
		}
	}
}
