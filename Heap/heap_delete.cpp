//program to delete from heap
#include<iostream>
using namespace std;
class heap{
	public:
	int a[10];
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
			int m=n;
			while(i>1)
			{
				i=i/2;
				if(a[i]<=temp)
				{
					int flag;
					flag=a[i];
					a[i]=temp;
					a[m]=flag;
					m=i;
				}
				else
				{
					break;
				}	
			}
			n++;
		}
	}
	void delet(){
		int temp;
		n=n-1;
		temp=a[1];
		a[1]=a[n];
		int i=1;
		while(2*i+1<=n)
		{
			if(a[i]<a[2*i] || a[i]<a[2*i+1])
			{
				int flag;
				flag=a[i];
				int s;
				if(a[2*i]>a[2*i+1])
				{
					s=2*i;
				}
				else
				{
					s=2*i+1;
				}
				a[i]=a[s];
				a[s]=flag;
				i=s;
			}
			else
			{
				break;
			}
		}
	}
	void display(){
		for(int j=1;j<6;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	heap h;
	h.insert(40);
	h.insert(20);
	h.insert(30);
	h.insert(50);
	h.insert(10);
	cout<<"heap : ";
	h.display();
	cout<<endl;
	cout<<"delete ---";
	h.delet();
	cout<<"heap : ";
	h.display();
	cout<<endl;
	cout<<"delete ---";
	h.delet();
	cout<<"heap : ";
	h.display();	
}
