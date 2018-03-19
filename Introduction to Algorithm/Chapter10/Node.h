//
// Created by trafalgar on 17-9-30.
//

#ifndef DATASTRUCTURE_NODE_H
#define DATASTRUCTURE_NODE_H

#include <string>
template<class T>
class Node {
public:
	Node<T>() {
		next = NULL;
	}
    T data;
    Node *next;
};

#endif //DATASTRUCTURE_NODE_H
