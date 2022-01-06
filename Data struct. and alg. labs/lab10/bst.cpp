#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

//recursive definition
template<typename T> class BinarySearchTree {
    public:
        //current node has references to: root, left child, right child, parent
        BinarySearchTree<T> *root, *left_son, *right_son, *parent;
        //current node info
        T *pinfo;

        //constructor
        BinarySearchTree() {
            left_son = right_son = NULL;
            root = this;
            pinfo = NULL;
            parent = NULL;
        }

        void setInfo(T info) {
            pinfo = new T;
            *pinfo = info;
        }

        void insert(T x) {
            if (pinfo == NULL)
                setInfo(x);
            else
                insert_rec(x);
        }

        //recursive insertion for finding the position of the info
        void insert_rec(T x) {
            int next_son;
			if (x <= (*pinfo))
                next_son = 0; //left
            else
                next_son = 1; //right

            if (next_son == 0) {  //left child
                if (left_son == NULL) {

                    //info
                    left_son = new BinarySearchTree<T>;
                    left_son->pinfo = new T;
                    *(left_son->pinfo) = x;

                    //links
                    left_son->left_son = left_son->right_son = NULL;
                    left_son->parent = this;
                    left_son->root = root;
                } else
                    left_son->insert_rec(x); //we go farther to the left
            }
            else { //right child

                if (right_son == NULL) {

                    //info
                    right_son = new BinarySearchTree<T>;
                    right_son->pinfo = new T;
                    *(right_son->pinfo) = x;

                    //links
                    right_son->left_son = right_son->right_son = NULL;
                    right_son->parent = this;
                    right_son->root = root;
                } else
                    right_son->insert_rec(x);
            }
        }

        //find the node with the info x
		BinarySearchTree<T>* find(T x) {
            BinarySearchTree<T> *rez;

            if (pinfo == NULL)
                return NULL;

            if ((*pinfo) == x)
                return this;

            if (x <= (*pinfo)) { //smaller info
                if (left_son != NULL)
                    return left_son->find(x);
                else
                    return NULL;
            } else {            //bigger info
                if (right_son != NULL)
                    return right_son->find(x);
                else
                    return NULL;
            }
        }

        //remove a node with a certain info
        void removeInfo(T x) {
            BinarySearchTree<T> *t = find(x);
            if (t != NULL)
                t->remove();
        }

		void remove() {
            BinarySearchTree<T> *p;
            T *paux;

            if (left_son == NULL && right_son == NULL) { //no children for the current node
                if (parent == NULL) { // this == root, delete the root
                    delete this->pinfo;
                    root->pinfo = NULL;  //the tree is empty
                } else {
                    if (parent->left_son == this) //current node is a left child
                        parent->left_son = NULL;
                    else
                        parent->right_son = NULL; //current node is a right child

                    delete this->pinfo; //delete info from the current node
                    delete this;
                }
            } else { //if we have left and / or right child

                if (left_son != NULL) { //left child != NULL
                    p = left_son;
                    while (p->right_son != NULL) //find the biggest element among the descendants of the left child
                        p = p->right_son;
                }
                else { //right child != NULL
                    p = right_son;
                    while (p->left_son != NULL) //find the smallest element among the descendants of the right child
                        p = p->left_son;
                }

                paux = p->pinfo;
                p->pinfo = this->pinfo;
                this->pinfo = paux; //we save in this the new value

                p->remove(); //we delete the old value
            }
        }

        //left - root - right
        void inOrderTraversal() {
            if (left_son != NULL)
                left_son->inOrderTraversal();

            cout<< *pinfo<<" ";

            if (right_son != NULL)
                right_son->inOrderTraversal();
        }
};



int main() {

    BinarySearchTree<int> *r = new BinarySearchTree<int>; //pointer to root

    r->insert(6);
    r->insert(8);
    r->insert(1);
    r->insert(9);
	r->insert(10);
    r->insert(4);
    r->insert(13);
    r->insert(1);
    r->insert(12);
    r->inOrderTraversal();
    cout<<endl;
    cout<< r->find(100)<<endl;
    cout<< r->find(1)<<endl;
    cout<< r->find(12)<<endl;
    cout<< r->find(8)<<endl;
    cout<< r->find(10)<<endl;
    cout<< r->find(4)<<endl;
    (r->find(6))->remove();
    r->inOrderTraversal();
    cout<<endl;
    cout<< r->find(4)<<endl;
    r->removeInfo(9);
    r->inOrderTraversal();


    return 0;

}




