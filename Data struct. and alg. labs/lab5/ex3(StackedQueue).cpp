#include <iostream>
using namespace std;
#include "stack.h"

template<typename T>
class StackedQueue {
	private:
		Stack <T> s1;
		Stack <T> s2;
	public:
	StackedQueue() { };
	~StackedQueue() { };

	void enqueue(T a) {
		s1.push(a);
		}

	T dequeue() {
		while(s1.getTopLevel()>0)
			s2.push(s1.pop());

		T aux=s1.pop();

		while (s2.getTopLevel()!=-1)
			s1.push(s2.pop());

		return aux;
		}

	int isEmpty() {
		return s1.isEmpty();
		}
};

int main() {
	StackedQueue<int> q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
 	cout<<q.dequeue()<<"\n";
 	cout<<q.dequeue()<<"\n";
  	q.isEmpty();
}
