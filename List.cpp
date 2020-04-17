#include "List.h"
#include<iostream>
using namespace std;
int main()
{
	List list;
	list.push_back(6);
	list.push_back(78);
	list.push_back(4);
	list.print();
	int isempty=list.empty();
	cout << "isemoty:" <<isempty << endl;
	int sizel = list.size();
	cout << "size:" << sizel << endl;
	int isfull = list.isFull();
	cout << "isfull:" << isfull << endl;
	list.clear();//list clear
	list.print();
	list.Insert(1, 11115); 
	list.Insert(2, 1115); 
	list.Insert(3,115);
	list.Insert(4,15); 
	list.Insert(5, 5); 
	list.removeAt(5);//5-th element removed
	list.print();
	system("pause");
	return 0;
}