//program for qudratic probing hash
#include<iostream>
using namespace std;
class hash{
	public:
	int hash[10];
	int n=6;
	void hashfun(int *a){
		for(int s=0;s<10;s++)
		{
			hash[s]=0;
		}
		for(int x=0;x<n;x++)
		{
			int c=a[x]%10;
			int i=1;
			while(hash[c]!=0)
			{
				c=0;
				if(hash[c]>0)
				{
					c=(c+i*i)%10;
					i=i+1;
				}
			}
			hash[c]=a[x];
		}
		for(int k=0;k<10;k++)
		{
			cout<<hash[k]<<" ";
		}
	}
};
int main(){
	int a[6]={12,33,40,50,60,16};
	int n=6;
	hash h;
	cout<<"array : ";
	for(int v=0;v<n;v++)
	{
		cout<<a[v]<<" ";
	}
	cout<<endl;
	cout<<"hashed array : ";
	h.hashfun(a);
	return 0;
}
