// Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Creation of the node
struct node
{
public:
	int data;
	node *next;
};

class List
{
private:
	node *head;
	node *tail;
public:
	List()
	{
		head = NULL;
		tail = NULL;
	}

	void insertAtStart(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
		
	}

	void insertAtEnd(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp= NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void insertAtPos(int pos, int value)
	{
		node *temp = new node;
		node *previous = new node;
		node *current = new node;
		current = head;
		for (int i = 1; i < pos; i++)
		{
			if (current != NULL)
			{
				previous = current;
				current = current->next;
			}
			else
			{
				cout << "Value exceded limit so it will insert at last" << "\n";
				break;
			}
	    }
		temp->data = value;
		previous->next = temp;
		temp->next = current;
	}

	void display()
	{
		node *temp = new node;
		temp = head;
		while (temp!=NULL)
		{
			cout << temp->data << "\n";
			temp = temp->next;
		}
	}


	void deleteAtFront()
	{
		if (head != NULL)
		{
			node *temp = new node;
			temp = head;
			head = head->next;
			delete temp;
		}
		else
		{
			cout << "No values to delete" << "\n";
		}
	}

	void deleteAtBack()
	{
		if (head != NULL)
		{
			node *current = new node;
			node *previous = new node;
			current = head;
			while (current != NULL)
			{
				previous = current;
				current = current->next;
			}
			previous = tail;
			previous->next = NULL;
			delete current;
		}
		else
		{
			cout << "No values to delete" << "\n";
		}
	}
	
	void deleteAtPos(int pos)
	{
		if (head != NULL)
		{
			node *current = new node;
			node *previous = new node;
			current = head;
			for (int i = 1; i < pos; i++)
			{
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
		}
		else
		{
			cout << "No values to delete" << "\n";
		}
	}
};

int main()
{
	List L1;
	//Let us insert end
	L1.insertAtEnd(10);
	L1.insertAtEnd(20);
	L1.display();
	cout << "Values inserted at end" << "\n";
	L1.insertAtStart(30);
	L1.insertAtStart(40);
	L1.display();
	cout << "Values inserted at start" << "\n";
	L1.insertAtPos(3,50);
	L1.insertAtPos(10,60);
	L1.display();
	cout << "Values inserted at Position" << "\n";

	//Deleting process
	L1.deleteAtBack();
	L1.display();
	cout << "Values deleted at end" << "\n";
	L1.deleteAtFront();
	L1.display();
	cout << "Values deleted at start" << "\n";
	L1.deleteAtPos(3);
	L1.display();
	cout << "Values deleted at Position" << "\n";

	return 0;
}




