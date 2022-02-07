#include<iostream>
using namespace std;
class heap{
	public:
	int a[11];
	int n=1;
	void insert(int val){
		if(n==1)
		{
			a[n]=val;
			n++;
		}
		else
		{
			a[n]=val;
			int temp=val;
			int i=n;
			int j=n;
			while(i>1)
			{
				i=i/2;
				if(a[i]<=temp)
				{
					int flag;
					flag=a[i];
					a[i]=a[j];
					a[j]=flag;
					j=i;
				}
				else
				{
					break;
				}	
			}
			n++;
		}
		for(int j=1;j<11;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	void display(){
		for(int j=1;j<11;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	heap h;
	int aa[5]={10,20,30,25,35};
	for(int i=0;i<5;i++)
	{
		h.insert(aa[i]);
	}
		h.display();
		cout<<h.n<<endl;
	return 0;
}
