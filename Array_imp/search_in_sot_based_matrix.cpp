#include<iostream>
using namespace std;
bool check(int i,int j){
	if(i==3 && j==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int a[4][5]={{10,12,14,30,45},{11,13,16,47,58},{13,24,29,63,64},{21,25,35,68,70}};
	int r=4;
	int c=5;
	int i=0;
	int j=c-1;
	int d=11;
	while(!check(i,j)){
		cout<<i<<" "<<j<<endl;
		if(d>a[i][j]){
			i++;
		}
		else if(d<a[i][j]){
			j--;
		}
		else{
			cout<<"found"<<i<<j;
			break;
		}
	}
	return 0;
}
