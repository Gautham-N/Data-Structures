// Queue_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Queue
{
private:
	int data[100];
	int front = 0;
	int rear = 0;
public:
	//Inserting the value into the Queue
	void insert(int val)
	{
		if (rear<= 99)
		{
			data[rear] = val;
			rear++;
		}
		else
		{
			cout << "Queue Overflow" << "\n";
		}
	}

	//Removing the value from the queue
	void remove()
	{
		if (front != rear)
		{
			front++;
		}
		else
		{
			cout << "No values present in Queue to delete" << "\n";
		}
	}

	//Displays the values in the Queue
	void display()
	{
		for (int i = front; i < rear; i++)
		{
			cout << data[i] << "\n";
		}
		if (front == rear)
		{
			cout << "Queue is Empty" << "\n";
		}
	}

	
};

int main()
{
	Queue qe;
	qe.insert(1);
	qe.insert(2);
	cout << "Display inserted value after inserting" << "\n";
	qe.display();
	qe.remove();
	qe.remove();
	qe.remove();
	cout << "Display inserted value after removing" << "\n";
	qe.display();
	qe.insert(10);
	qe.insert(20);
	cout << "Display inserted value after inserting" << "\n";
	qe.display();
	return 0;
}


