#include <iostream>
#include "list1.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template<typename T>
class Queue{
private:
    LinkedList<T> l;
public:
    void enqued(T x){
        l.addLast(x);
    }
    T dequed(){
        if(isEmpty()){
            T x;
            return x;
        }
        T x = l.pfirst->info;
        l.removeFirst();
        return x;
    }

    T peek(){
        if(isEmpty()){
            T x;
            return x;
        }
        return l.pfirst->info;

    }

    int isEmpty(){
        return l.isEmpty();
    }
};


int main(){
    LinkedList<int> lista;
    LinkedList<int> lista2;
    lista.addFirst(2);
    lista.addFirst(4);
    lista.addFirst(9);
    lista.addFirst(16);
    lista.addFirst(21);
    lista.addFirst(12);
    lista.addFirst(33);
    lista.addLast(23);
    lista.addLast(12);
    lista.addFirst(1);
    lista.removeFirst();
    lista.removeFirst();
    lista.removeFirst();


    lista.printList();

    return 0;
}
