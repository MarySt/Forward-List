#pragma once
#include<memory>

template<typename T>
class Forward_list
{
public:
	Forward_list();
	~Forward_list();
	void push_front(T data);
	void pop_front();
	T& front() const;
	bool empty() const;
	size_t getSize() const{ return size; }
private:
	template<typename T>
	class Node {
	public:
		T data;
		std::shared_ptr<Node> pNext;
		Node(T d, std::shared_ptr<Node<T>> next = nullptr) : data(d), pNext(next) {}
	};
	std::shared_ptr<Node<T>> head;
	size_t size;
};

template<typename T>
Forward_list<T>::Forward_list() : head(nullptr), size(0) {

}

template<typename T>
Forward_list<T>::~Forward_list() {

}

template<typename T>
void Forward_list<T>::push_front(T data)
{
	if (!head) {
		head = std::make_shared<Node<T>>(data);
	}
	else {
		auto curr = head;
		head = std::make_shared<Node<T>>(data);
		head->pNext = curr;
	}
	this->size++;
}

template<typename T>
void Forward_list<T>::pop_front()
{
	head =head->pNext;
	size--;
}

template<typename T>
inline T & Forward_list<T>::front() const
{
	return head->data;
}

template<typename T>
inline bool Forward_list<T>::empty() const
{
	return !this->size;
}
