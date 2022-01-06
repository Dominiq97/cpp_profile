#ifndef STACKBUCKETS_H_INCLUDED
#define STACKBUCKETS_H_INCLUDED
#define NMAX 9

template<typename T>
class Bucket{
    private:
        T litriGaleata[NMAX];
        int top;


    public:
        void push(T x){
            litriGaleata[++top] = x;
        }

        int isEmpty(){
            if (top>0){
                    return 0;
                }else{
                    return 1;
                    }
        }

        T pop(){
            return litriGaleata[top--];
        }

        Bucket(){
            top = 0;
        }

        T showTop(){
            return top;
        }
};
#endif
