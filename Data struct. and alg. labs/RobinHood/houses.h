#ifndef HOUSES_H_INCLUDED
#define HOUSES_H_INCLUDED
#define HMAX 20

template<typename T>
class Houses{
    private:
        T queueArray[HMAX];
        int head, tail, size;
    public:
        void enqueue(T x){
            if (size == HMAX){
                return;
            }
            queueArray[tail] = x;
            tail=(tail+1)%HMAX;
            size++;
        }

        int getSize(){
            return size;
        }

        T dequeue(){

            T x = queueArray[head];
            head = (head + 1) % HMAX;
            size--;
            return x;
        }

        T peekAndDestroy(){
            int s = queueArray[head];
            for(int i = 1; i<=size; i++){
                queueArray[i-1]=queueArray[i];
            }
            size--;
        }


        T showQueue(){
            for(int i = 0;i<size;i++){
                cout<<queueArray[i]<<" ";
            }
        }

        Houses(){
            head = tail = size = 0;
        }
};

#endif
