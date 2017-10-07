//
// Created by trafalgar on 17-9-30.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H
#include "Node.h"
template <class T>
class LinkList{
private:
	Node<T>* lastNode;
	Node<T>* tempNode;
	Node<T>* headNode;
	unsigned int length;
public:
	LinkList<T>();
	~LinkList<T>() {};
	unsigned int ListLength();
	bool empty();
	void append(T data);
	void traversal();
	Node<T>* find(T data);
	void deleteNode(T data);
	void insert(T data, Node<T>* node);
	void insertHead(T data);
};

#endif //DATASTRUCTURE_LINKLIST_H


template<class T>
inline LinkList<T>::LinkList()
{
	lastNode = NULL;
	tempNode = NULL;
	headNode = NULL;
	length = 0;
}

template<class T>
inline unsigned int LinkList<T>::ListLength()
{
	return this->length;
}

template<class T>
inline bool LinkList<T>::empty()
{
	return this->length==0;
}

template<class T>
inline void LinkList<T>::append(T data)
{
	tempNode = new Node<T>();
	tempNode->data = data;
	if (this->empty()) {
		headNode = tempNode;
		lastNode = tempNode;
	}
	else {
		lastNode->next = tempNode;
		lastNode = tempNode;
	}
	length++;
}

template<class T>
inline void LinkList<T>::traversal()
{
	tempNode = headNode;
	while (tempNode != NULL) {
		cout << tempNode->data << endl;
		tempNode = tempNode->next;
	}
}

template<class T>
inline Node<T>* LinkList<T>::find(T data)
{
	tempNode = headNode;
	while (tempNode != NULL && tempNode->data!=data) {
		tempNode = tempNode->next;
	}
	return tempNode;
}

template<class T>
inline void LinkList<T>::deleteNode(T data)
{
	Node<T>* NodeToDelete = headNode;
	if (NodeToDelete == NULL)return;
	if (NodeToDelete->data == data) {
		NodeToDelete->next == NULL ? headNode = NULL : headNode = NodeToDelete->next;
		delete(NodeToDelete);
		return;
	}
	while (NodeToDelete->next != NULL&&NodeToDelete->next->next->data != data) {
		NodeToDelete = NodeToDelete->next;
	}
	if (NodeToDelete->next == NULL)return;
	if (NodeToDelete->next == lastNode) {
		lastNode = NodeToDelete;
		delete(NodeToDelete->next);
		NodeToDelete = NULL;
		return;
	}
	else {
		tempNode = NodeToDelete->next;
		NodeToDelete->next = NodeToDelete->next->next;
		delete(tempNode);
		tempNode = NULL;
		return;
	}
	this->length--;
}

template<class T>
inline void LinkList<T>::insert(T data, Node<T>* node)
{
	tempNode = new Node<T>();
	tempNode->data = data;
	tempNode->next = node->next;
	node->next = tempNode;
	if (tempNode->next = NULL)
		lastNode = tempNode;
	this->length++;
}

template<class T>
inline void LinkList<T>::insertHead(T data)
{
	tempNode = new Node<T>();
	tempNode->data = data;
	tempNode->next = haedNode;
	headNode = tempNode;
	this->length++;
}
