#ifndef _LIST_H
#define _LIST_H

#include "node.h"

class List {
	public:
		List();
		void insert(Node *, Node *);
		void append(Node *, Node *);
		Node *getNode(Node *);
		Node *getLocation(Node *);
		void haha();
		void displayf();
		void displayb();
		int  getQuantity();
		Node * getStart();
		Node * getEnd();
		List * copyList();
		~List();

		//functions for discrete project 3
		void super();
		void build();
		void displaySet();
		void sort();
		bool search(int input);
		void power();
		void permu(int check);
		void surprise();

	private:
		Node *start;
		Node *end;
		int qty;
};

#endif
