#pragma once
#include "LinkList/Node.h"
template<class T>
class Stack
{
public:
	Stack<T>();
	~Stack<T>();
	unsigned int length();
	bool empty();
	T top();
	void pop();
	void push(T data);
private:
	unsigned int StackLength;
	Node<T>* tempNode;
	Node<T>* topNode;
};

template<class T>
inline Stack<T>::Stack()
{	
	StackLength = 0;
	tempNode = NULL;
	topNode = NULL;
}

template<class T>
inline Stack<T>::~Stack()
{
}

template<class T>
inline unsigned int Stack<T>::length()
{
	return this->StackLength;
}

template<class T>
inline bool Stack<T>::empty()
{
	return topNode==NULL;
}

template<class T>
inline T Stack<T>::top()
{
	return topNode->data;
}

template<class T>
inline void Stack<T>::pop()
{
	if (this->empty())return;
	if (topNode->next == NULL) {
		delete(topNode);
		topNode = NULL;
		StackLength--;
		return;
	}
	tempNode = topNode;
	topNode = topNode->next;
	delete(tempNode);
	StackLength--;
}

template<class T>
inline void Stack<T>::push(T data)
{
	tempNode = new Node<T>;
	tempNode->data = data;
	if (this->empty()) {
		topNode = tempNode;
		StackLength++;
		return;
	}
	tempNode->next = topNode;
	topNode = tempNode;
	StackLength++;
}
