#include <iostream>
#include "list"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printList(){
    struct Node<T> *px;
    px=pfirst;
    while(px!=NULL){
        cout<<px->info<<endl;
        px=px->next;
    }
}


int main(){
    LinkedList<int> lista;
    lista.addFirst(2);
    lista.addFirst(4);
    lista.addFirst(9);
    lista.addFirst(16);
    lista.printList();

    return 0;
}
