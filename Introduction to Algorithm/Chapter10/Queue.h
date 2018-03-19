

#include"LinkList\Node.h"
template<class T>
class Queue
{
public:
	Queue<T>();
	~Queue<T>();
	bool empty();
	unsigned int length();
	void enQueue(T data);
	void deQueue();
	T front();
private:
	unsigned int QueueLength;
	Node<T>* frontNode;
	Node<T>* tempNode;
	Node<T>* rearNode;
};

template<class T>
inline bool Queue<T>::empty()
{
	return QueueLength == 0;
}

template<class T>
inline unsigned int Queue<T>::length()
{
	return this->QueueLength;
}

template<class T>
inline void Queue<T>::enQueue(T data)
{
	tempNode = new Node<T>;
	tempNode->data = data;
	if (this->empty()) {
		rearNode = frontNode = tempNode;
	}
	else {
		rearNode->next = tempNode;
		rearNode = tempNode;
	}
	QueueLength++;
}

template<class T>
inline void Queue<T>::deQueue()
{
	if (this->empty())return;
	if (rearNode == frontNode) {
		delete(frontNode);
		rearNode = frontNode = NULL;
		QueueLength--;
		return;
	}
	tempNode = frontNode;
	frontNode = frontNode->next;
	delete(tempNode);
	tempNode = NULL;
	QueueLength--;
}

template<class T>
inline T Queue<T>::front()
{
	return frontNode->data;
}

template<class T>
inline Queue<T>::Queue()
{
	QueueLength = 0;
	frontNode = NULL;
	tempNode = NULL;
	rearNode = NULL;
}

template<class T>
inline Queue<T>::~Queue()
{
}

