#ifndef BARREL_H_INCLUDED
#define BARREL_H_INCLUDED

#define NMAXBARREL 21
template<typename T>
class Stack {
    private:
        T liters[NMAXBARREL];
        int top;
    public:
        void push(T x){
            if (top >= NMAXBARREL){
                return;
            }
            liters[++top] = x;
        }

        int isEmpty(){
            return (top = 0);
        }

        T pop(){
            return liters[top--];
        }

        Stack(){
            top = 0;
        }

        T showTop(){
            return top;
        }
};
#endif
