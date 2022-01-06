#include <stdio.h>
#include <iostream>

using namespace std;

///implementation of MIN HEAP using array
template<typename T> class Heap {
    public:
        T *H;
        int currentDim, maxDim;

		///constructor using the max dimension of the heap
		///We start at index 1.
        Heap(int maxDim) {
            this->maxDim = maxDim;
            H = new T[this->maxDim + 1];
            currentDim = 0;
        }

		///insert an element in the heap
        void insertElement(T x) {
            if (currentDim == maxDim) {
                fprintf(stderr, "Error!\n");
                return;
            }
            currentDim++;
            H[currentDim] = x;
            filterUp(currentDim);
	}

		///return the root, but don't delete it
		T peek() {
            if (currentDim == 0) {
                fprintf(stderr, "Error!\n");
                T x;
                return x;
            }

            return H[1];
        }

        ///delete and display the min element (the root)
		T extractMin() {
            if (currentDim == 0) {
                fprintf(stderr, "Error!\n");
                T x;
                return x;
            }

            T minValue = H[1];
            H[1] = H[currentDim];
            currentDim--;
			if (currentDim > 0)
                filterDown(1);

            return minValue;
        }

		///function called by the insert function to maintain the properties of the heap
        void filterUp(int i) {
            int parent;
            T vaux;

            parent = i / 2;
            while (i > 1 && H[parent] > H[i]) {
                vaux = H[parent];
                H[parent] = H[i];
                H[i] = vaux;

                i = parent;
                parent = i / 2;
            }
        }

        ///function called by the delete function to maintain the properties of the heap
         void filterDown(int i) {
            T vaux;

            while (1) {
                if (2 * i + 1 > currentDim) {
                    if (2 * i > currentDim)
                        break;
                    else
                    ///If we have only one child
                        if (H[2 * i] < H[i]) {
                            vaux = H[2 * i];
                            H[2 * i] = H[i];
                            H[i] = vaux;
                            i = 2 * i;
                        }
                        else
                            break;
                    }
                else {
                        ///Check which child is bigger
                    if (H[2 * i] <= H[2 * i + 1] && H[2 * i] < H[i]) {
                        vaux = H[2 * i];
                        H[2 * i] = H[i];
						H[i] = vaux;
                        i = 2 * i;
                    }
                    else
                    if (H[2 * i + 1] <= H[2 * i] && H[2 * i + 1] < H[i]) {
                        vaux = H[2 * i + 1];
                        H[2 * i + 1] = H[i];
                        H[i] = vaux;
                        i = 2 * i + 1;
                    }
                    else
                        break;
                }
            }
        }
};


int main() {
    Heap<int> heap(100);
    heap.insertElement(10); heap.insertElement(6);
    heap.insertElement(7); heap.insertElement(8);
    heap.insertElement(5); heap.insertElement(13);
    heap.insertElement(6); heap.insertElement(0);
    heap.insertElement(4); heap.insertElement(2);
    heap.insertElement(9);


    cout<<"Min:"<<heap.extractMin()<<endl;
    cout<<"Root:"<<heap.peek()<<endl;
    cout<<"Min:"<<heap.extractMin()<<endl;

}










