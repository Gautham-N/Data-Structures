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

	void push(int val)
	{
		data[count] = val;
		count++;
	}

	void pop()
	{
		if (count != 0)
		{
			count--;
		}
	}

	void display()
	{
		for (int i=0;i<count;i++)
		{
			cout<< data[i]<<"\n";
		}
	}

	void top()
	{
		cout << data[count-1] << "\n";
	}
};

int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << "pushed" << "\n";
	st.display();
	st.pop();
	st.pop();
	cout << "poped" << "\n";
	st.display();
	cout << "top value" << "\n";
	st.top();
	return 0;
}


