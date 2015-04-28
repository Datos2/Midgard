#ifndef LINKEDLIST_H
#define	LINKEDLIST_H
#include <iostream>

#include "linkedNode.h"

using namespace std;


template<class T>
class LinkedList{

private:
	int _length;
	Node<T>* _head;
	Node<T>* _tail;

public:
	LinkedList();
	void insertTail(T);
	void deleteData(T);
	void showData();
	void deleteAll();
	Node<T>* getHead();
	Node<T>* getTail();
	int getLength();
	bool isEmpty();
};

template<class T>
Node<T>* LinkedList<T>::getHead(){ return _head; }

template<class T>
Node<T>* LinkedList<T>::getTail(){ return _tail; }

template<class T>
int LinkedList<T>::getLength(){ return _length; }

template<class T>
bool LinkedList<T>::isEmpty()
{
	if(_head != 0){return false;}
	return true;
}



template<class T>
LinkedList<T>::LinkedList(){
	_length = 0;
	_head = 0;
	_tail = 0;
}


template<class T>
void LinkedList<T>::insertTail(T pData){
	Node<T>* tmp = new Node<T>(pData);

	if(_head == 0){
		_head = tmp;
		_tail = _head;
                _length++;
	}
	else{		
		_tail->setNext(tmp);
		tmp->setPrevious(_tail);
		_tail = tmp;
		_tail->setNext(_head);
		_head->setPrevious(_tail);
                _length++;
	}
}


template<class T>
void LinkedList<T>::deleteData(T pData){}


template<class T>
void LinkedList<T>::showData(){
	Node<T>* tmpNode = _head;
	for(int i=0; i < _length; i++){
		cout << "El dato es: " << tmpNode->getData() << endl;
		tmpNode = tmpNode->getNext();
	}
}


template<class T>
void LinkedList<T>::deleteAll(){
	this->_head = 0;
	this->_tail = 0;
	this->_length = 0;
}

#endif	/* LINKEDLIST_H */

