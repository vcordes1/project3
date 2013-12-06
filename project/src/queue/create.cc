#include "queue.h"

Queue :: Queue()
{
	this -> data = NULL;
	this -> front = NULL;
	this -> back = NULL;
	this -> bufsiz = 0;
}

Queue :: Queue(int size)
{
	this -> data = NULL;
	this -> front = NULL;
	this -> back = NULL;
	this -> bufsiz = size;
}
