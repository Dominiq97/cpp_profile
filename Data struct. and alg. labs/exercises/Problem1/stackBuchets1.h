#ifndef STACKBUCKETS1_H_INCLUDED
#define STACKBUCKETS1_H_INCLUDED
#define NMAX 5;

template<typename T>
class Bucket2 {
    private:
        T stackArray[NMAX];
        int topLevel;


    public:
        void push(T x) // puts an element in the stack array
        {
            if (topLevel >= NMAX-1) //check if the stack array has the maximum dimension
			{
                cout<<"The stack is full: we have already NMAX elements!\n";
                //exit the function without making anything
                return;
            }
        	/* add an element=> the index of the last element of the stack Array
        	increases and put the value of the new element in the stack array */
            stackArray[++topLevel] = x;
        }

        int isEmpty()
        {
            //returns 1, if topLevel>=0, meaning the stack array has elements
            // returns 0, otherwise
            return (topLevel < 0);
        }

        T pop() // extracts and element from the stack array and returns the new top
        {
            if (isEmpty())
            {
            // the extraction is made only if the array is not empty
                cout<<"The stack is empty! \n";
                T x;
                return x;
            }
            return stackArray[topLevel--]; 	// the topLevel decreases and the new top is changed
            //difference return stackArray[--topLevel] ?
        }

        T peek()
        {
        // returns the top of the stack
            if (isEmpty())
            {
            // the extraction is made only if the array is not empty
                cout<<"The stack is empty! \n";
                T x;
                return x;
        	}
            return stackArray[topLevel];
        }

        Bucket2()
        { // constructor
            topLevel = 0; //the stack is empty in the beginning
        }

        T showTop(){
            return topLevel;
        }

        ~Bucket2()
        { // destructor
        }
};



#endif // STACKBUCKETS1_H_INCLUDED
