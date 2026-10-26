#include<iostream>
using namespace std;

int stack[50];
int top = -1;

void push(int n)
{
	stack[++top] = n;
}
int pop()
{
	return stack[top--];
}

int main()
{
	int rem, n;
	
	cout<<"Enter the digit to turn into binary :";
	cin>>n;
	int a;
	while(n > 0)
	{
		rem = n % 2;
		push(rem);
		n = n/2;
	}
	cout<<"This is answer";
	
	while(top != -1)
	{
		cout<<pop();
	}
	return 0;
}
