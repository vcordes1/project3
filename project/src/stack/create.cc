#include "stack.h"

Stack :: Stack()
{
	this -> data = NULL;
	this -> top = NULL;
	this -> data = 0;
}

Stack :: Stack(int size)
{
	this -> data = NULL;
	this -> top = NULL;
	this -> size = size;
}
