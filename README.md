# List
  #include "List.h"
#include <iostream>
using namespace std;
List :: List(){
	this->tail= NULL;
	this->length = 0;
	this->head = NULL;
}  
List::~List()
{
	cout << " List deleted " << " ";

}
void List::push_back(int value)
{
	Node* tmp = new Node;
	tmp->data = value;
	tmp->next = NULL;

	if (head == NULL)
	{
		head = tmp;
		tail= tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tail->next;
	}
	length++;
}
void  List::print(){
	int i = 1;
	while (head!= NULL)
	{
		
		cout <<"index"<<i<<" "<<head->data << ": ";
		head = head->next;
		i++;
		cout << endl;
	}
 }
bool List::empty()
{
	return head == nullptr;
}
int List::size()
{
	return length;
}
bool List::isFull()
{
	return head != nullptr;
}
void List::clear()
{
	_clear(head);

	length = 0;
}
void List::Insert(int pos, int value)
{


	if (pos <= length)

	{

		Node* tmp = head;

		for (int i = 0; i < pos - 2; i++)

			tmp = tmp->next;

		Node* tmp2 = tmp->next;

		tmp->next = new Node();

		tmp->next->data = value;

		tmp->next->next = tmp2;

		length++;

	}

	else if (pos == length + 1)

	{

		if (head == NULL)

		{

			head = new Node();

			head->data = value;

			head->next = NULL;

			length++;

		}
		else

		{

			Node* tmp = head;

			while (tmp->next)

			{

				tmp = tmp->next;

			}

			tmp->next = new Node();

			tmp->next->data = value;

			tmp->next->next = NULL;

			length++;

		}

	}
}
void List::removeAt(int pos)
{
	if (pos <= length)
	{

		Node* tmp = head;

		for (int i = 0; i < pos - 2; i++)

			tmp = tmp->next;

		Node* tmp2 = tmp->next->next;

		delete tmp->next;

		tmp->next = tmp2;

	}
}
