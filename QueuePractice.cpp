#include<iostream>
using namespace std;

int q[5], front = 0, rear = -1;

void enqueue(int x)
{
	q[++rear] = x;
}
void dequeue()
{
	if(front > rear)
	{
		cout<<"Queue is empty !";
	}
	else
	{
	cout<<q[front++]<< " Removed !";	
	}
}

void display()
{
	for(int i = front; i<= rear;i++)
	{
		cout<<q[i]<< " ";
	}
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	
	display();
	cout<<endl;
	dequeue();
	cout<<endl;
	display();
	
	return 0;
}
