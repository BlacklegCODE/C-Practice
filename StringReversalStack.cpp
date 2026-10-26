#include<iostream>
#include<string.h>
using namespace std;

char stack[50];
int top = -1;

void push(char ch)
{
	stack[++top] = ch;
}
char pop()
{
	return stack[top--];
}

int main()
{
	char str[50];
	cout<<"Enter string to reverse :";
	cin>>str;
	for(int i = 0;i<strlen(str);i++)
	{
		char ch = str[i];
		push(ch);	
	}	
	while(top != -1)
	{
		cout<<pop();
	}
	
}





