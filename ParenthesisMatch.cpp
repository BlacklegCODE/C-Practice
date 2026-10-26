//parenthesis matching

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
	char exp[50];
	cout<<"Enter parenthesis to be matched :";
	cin>>exp;
	
	for(int i = 0;i<strlen(exp);i++)
	{
		char ch = exp[i];
		if(ch == '[' || ch == '(' || ch == '{')
		{
			push(ch);
			top++;
		}
		else if(ch == '}' && pop() != '{'){top = 0; break;}
		else if(ch == ')' && pop() != '('){top = 0; break;}
		else if(ch == ']' && pop() != '['){top = 0; break;}
	}
	
	if(top == 0)
	{
		cout<<"Parenthesis match!";
	}
	else
	{
		cout<<"Parenthesis do not match !!";
	}
	return 0;
}














