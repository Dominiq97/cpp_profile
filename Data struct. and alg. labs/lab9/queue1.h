#include <stdio.h>
#include <iostream>
#define NMAX 100

using namespace std;
template<typename T> class Queue {
    private:
        T queueArray[NMAX];
        int head, tail;
    public:

        void enqueue(T x) {
            if (tail == NMAX) { //on verifie si la queue est pleine
                cout<<"Error 101 - The queue is full!\n";
                return;
            }
            queueArray[tail] = x; //on ajoute l’element a la fin de la queue
            tail++; //on deplace le tail a droite
        }

        T dequeue() {
            if (isEmpty()) { //on verifie si la queue est vide
                cout<<"Error 102 - The queue is empty!\n";
                T x;
                return x;
            }
            T x = queueArray[head]; //on retourne l’element de la tete
            head++;                          //on deplace la tete a droite
            return x;   }

        T peek() {
            if (isEmpty()) {//on verifie si la queue est vide
                cout<<"Error 103 - The queue is empty!\n";
                T x;
                return x;
            }
            return queueArray[head]; //on retourne l’element situe dans la tete de la queue
        }

        int isEmpty() {
            return (head == tail); //si head et tail representent les memes indices, la queue est vide
        }

    Queue() {
        head = tail = 0; // la queue est vide au debut
    }
};
