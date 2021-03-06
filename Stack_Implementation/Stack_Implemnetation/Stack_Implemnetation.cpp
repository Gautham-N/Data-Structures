// Stack_Implemnetation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
class stack
{
private:
	int data[100];
	int count=0;
public:
	//Pushes the value into the stack
	void push(int val)
	{
		if (count <= 99)
		{
			data[count] = val;
			count++;
		}
		else
		{
			cout << "Stack is Pull" << "\n";
		}
	}

	//Popes out the last pushed value
	void pop()
	{
		if (count != 0)
		{
			count--;
		}
		else
		{
			cout << "No values present in Stack to pop" << "\n";
		}
	}

	//Displays the values in the stack
	void display()
	{
		for (int i=count;i>0;i--)
		{
			cout<< data[i-1]<<"\n";
		}
		if (count == 0)
		{
			cout << "Stack is Empty"<<"\n";
		}
	}

	//Displays the top Value
	void top()
	{
		if (count != 0)
		{
			cout << data[count - 1] << "\n";
		}
		else
		{
			cout << "Stack is empty" << "\n";
		}
	}
};

int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(100);
	cout << "Values After Pushing" << "\n";
	st.display();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout << "Values After pop operation" << "\n";
	st.display();
	st.push(7);
	st.push(11);
	cout << "Values After Pushing" << "\n";
	st.display();
	cout << "top value" << "\n";
	st.top();
	return 0;
}


