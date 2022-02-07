//program to create circular queue
#include<iostream>
using namespace std;
class queue{
	public:
	int a[4];
	int size=4;
	int rear=-1;
	int front=-1;
	void enque(int val){
		if(!is_full())
		{
			rear=(rear+1)%size;
			a[rear]=val;
		}
	}
	int deque(){
		int val;
		val=a[front];
		front++;
		return val;
	}
	void display(){
		int i = front ;
	    do
		{
	        cout << a[i]<<" "<<i<<"--";
	        i = (i + 1) % size;
	    }   while (i != (rear + 1) % size);
	}
	int is_full(){
		if((rear+1)%size==front)
		{
			return 1;
		}
		else
		{
			return 0; 
		}
	}
	int is_empty(){
		if(front==rear)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int main(){
	queue q;
	q.front++;
	q.rear++;
	q.a[q.front]=7;
	q.display();
	cout<<endl;
	q.enque(5);
	q.display();
	cout<<endl;
	q.enque(4);
	q.display();
	q.enque(3);
	q.display();
	cout<<endl;
	cout<<q.deque()<<endl;
	q.display();
	cout<<endl;
	q.enque(6);
	q.display();
}
