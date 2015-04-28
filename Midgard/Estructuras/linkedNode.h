#ifndef LINKEDNODE_H
#define	LINKEDNODE_H


template<class T>
class Node{

private:
	T _data;
	Node* _next;
	Node* _previous;
public:

	Node(T pData);
	void setData(T);
	void setNext(Node<T>*);
	void setPrevious(Node<T>*);

	T getData();
	Node<T>* getNext();
	Node<T>* getPrevious();
};


template<class T>
Node<T>::Node(T pData){
	_data = pData;
	_next = 0;
	_previous = 0;
}


template<class T>
void Node<T>::setData(T pData){
	_data = pData;
}


template<class T>
void Node<T>::setNext(Node<T>* pNext){
	_next = pNext;
}


template<class T>
void Node<T>::setPrevious(Node<T>* pPrevious){
	_previous = pPrevious;
}


template<class T>
T Node<T>::getData(){
	return _data;
}


template<class T>
Node<T>* Node<T>::getNext(){
	return _next;
}


template<class T>
Node<T>* Node<T>::getPrevious(){
	return _previous;
}

#endif	/* LINKEDNODE_H */

