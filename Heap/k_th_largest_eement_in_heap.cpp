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
		n--;
			for(int j=1;j<6;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
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
	int aa[5]={5,40,20,30,50};
	for(int i=0;i<5;i++)
	{
		h.insert(aa[i]);
	}
	h.display();
	h.n--;
	for(int i=0;i<5;i++){
		h.delet();
	}
	h.display();
	for(int hl=5;hl>0;hl--)
	{
		cout<<h.a[hl]<<" ";
	}				
}
