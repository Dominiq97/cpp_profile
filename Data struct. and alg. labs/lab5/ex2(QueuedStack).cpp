#include <iostream>
using namespace std;
#include "queue2.h"

template<typename T>
class QueuedStack {
	private:
	QueueCirc <T> q1;
	QueueCirc <T> q2;

	public:
	QueuedStack() { };
	~QueuedStack() { };

	void push(T a) {
		q1.enqueue(a);
		}

	T pop() {

		while(q1.getSize()!=1)
			q2.enqueue(q1.dequeue());

		T aux=q1.dequeue();

		while (q2.getSize()!=0)
			 q1.enqueue(q2.dequeue());
		return aux;

		}

	int isEmpty() {
		return q1.isEmpty();
		}

};

int main() {
	QueuedStack<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
 	cout<<q.pop()<<"\n";
 	cout<<q.pop()<<"\n";
}
