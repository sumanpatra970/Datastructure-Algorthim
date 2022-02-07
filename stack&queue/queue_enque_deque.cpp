//program to create queue using array
#include<iostream>
using namespace std;
class queue{
	public:
	int a[6];
	int n=3;
	int last=0;
	void enque(int val){
		a[last]=val;
		last++;
	}
	int deque(){
		int val;
		val=a[0];
		for(int i=0;i<last;i++)
		{
			a[i]=a[i+1];
		}
		last--;
		return val;
	}
	void display(){
		for(int j=0;j<last;j++)
		{
			cout<<a[j]<<" ";
		}
	}
	void is_full(){
		if(n==last)
		{
			cout<<"queue is full";
		}
		else
		{
			cout<<"queue is not full";
		}
	}
	void is_empty()
	{
		if(last==0)
		{
			cout<<"queue is empty";
		}
		else
		{
			cout<<"queue is not empty";
		}
	}
};
int main(){
	queue q;
	int ab,ac;
	q.a[q.last]=7;
	q.last++;
	cout<<"displaying queue ";
	q.display();
	cout<<endl;
	cout<<"enter element to enque ";
	cin>>ab;
	q.enque(ab);
	cout<<"displaying queue ";
	q.display();
	cout<<endl;
	cout<<"enter element to enque ";
	cin>>ac;
	q.enque(ac);
	cout<<"displaying queue ";
	q.display();
	cout<<endl;
	cout<<"queue full status ";
	q.is_full();
	cout<<endl;
	cout<<"deque element ";
	cout<<q.deque()<<endl;
	cout<<"displaying queue ";
	q.display();
}
