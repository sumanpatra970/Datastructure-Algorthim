//program for heap-sort
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
					display();
				}
				else
				{
					display();
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
		a[n]=temp;
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
	cout<<"insertion"<<endl;
	h.insert(40);
	cout<<"insertion"<<endl;
	h.insert(20);
	cout<<"insertion"<<endl;
	h.insert(30);
	cout<<"insertion"<<endl;
	h.insert(50);
	cout<<"insertion"<<endl;;
	h.insert(10);
	int d=h.n;
	cout<<"insertion"<<endl;
	h.delet();
	cout<<"delettion"<<endl;
	h.display();
	h.delet();
	cout<<"delettion"<<endl;
	h.display();
	h.delet();
	cout<<"delettion"<<endl;
	h.display();
	h.delet();
	cout<<"delettion"<<endl;
	h.display();
	h.delet();
	cout<<"delettion"<<endl;
	h.display();
	cout<<"array is sorted "<<endl;
	for(int hl=d-1;hl>0;hl--)
	{
		cout<<h.a[hl]<<" ";
	}				
}
