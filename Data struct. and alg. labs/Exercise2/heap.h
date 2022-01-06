#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <stdio.h>
#include <iostream>

using namespace std;

///implementation of MIN HEAP using array
template<typename T> class Heap {
    public:
        T *H;
        int currentDim, maxDim;
        ///CURRENT DIM number of values stored

		///constructor using the max dimension of the heap
		///We start at index 1.
        Heap(int maxDim) {
            this->maxDim = maxDim;
            H = new T[this->maxDim + 1];///allocate memory
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
            H[1] = H[currentDim];///last position of an element;
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
                        ///Check which child is smaller
                    if (H[2 * i] <= H[2 * i + 1] && H[2 * i] < H[i]) {///h 2*i =left child
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
        void displayByLevels(){
                int i=1,j=2,k;
                int nr=2;
                int ok=1;
                if(j>currentDim) ok=0;
                if(j==currentDim){
                        ok=0;
                    cout<<"The"<<nr<<"level has the values:"<<H[j];
                }
                while(ok==1){
                    cout<<"The"<<nr<<"level has the values:";
                    i=i*2;
                    for(k=1;k<=i&&j<=currentDim;k++){
                        cout<<H[j]<<" ";
                        j++;
                    }
                    if(j>currentDim) ok=0;
                    cout<<endl;
                    nr++;
                }
                }
};

#endif // HEAP_H_INCLUDED
