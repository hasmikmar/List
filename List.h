#pragma once
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
class List
{
private:
	Node* tail;
	Node* head = NULL; int length;
	void _clear(Node*& h)
	{
		if (h != NULL)
		{

			_clear(h->next);

		}
		delete h;
		h = NULL;
	}
public:

	List();
	~List();
	List(const List& other)

	{

		Node* tmp1 = other.head;

		head = NULL;

		length = 0;

		while (tmp1 != NULL)

		{

			this->Insert(length + 1, tmp1->data);

			tmp1 = tmp1->next;

		}

	}
	void push_back(int value);
	void print();
	bool empty();
	int size();
	bool isFull();
	void Insert(int pos,int value);
	void clear();
	void removeAt(int pos);
	
	


};

