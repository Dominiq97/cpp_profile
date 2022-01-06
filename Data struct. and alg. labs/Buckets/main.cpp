#include <iostream>
using namespace std;
#include "stackBuckets.h"
#include "barrel.h"
int main(){
    int c1=8;           //capacity of the first bucket
    int c2=5;           //capacity of the second bucket

    Bucket<int> bucket1;        //stack of bucket 1
	Bucket<int> bucket2;        //stack of bucket 2
	Stack<int> barrel;          //stack of the barrel
    while(barrel.showTop()!=20){
        barrel.push(1);          // filling the barrel ;
    }



    while(bucket2.showTop()!=4){        //it stops when we measure in the second bucket 4 liters form the barrel
        if(barrel.showTop()==20){       // conditions to transport the wine when the 2 buckets are empty
            int n = 0;
            while(n<c1){
                barrel.pop();           // filling the 1st bucket with her capacity
                bucket1.push(1);
                n++;
            }
        }else if(((barrel.showTop()+bucket1.showTop())==20) && (bucket1.showTop()!=0)){
            while((bucket1.isEmpty()==0) && (bucket2.showTop()<c2)){        //filling the 2nd bucket with the wine from the 1st one
                bucket1.pop();
                bucket2.push(1);
            }
        }else if(bucket2.showTop()==c2){
            while((bucket2.isEmpty()==0)){      //if the 2nd bucket is full, empty to the barrel
                barrel.push(1);
                bucket2.pop();
            }
        }else if(bucket1.isEmpty()==1){
            while(bucket1.showTop()!=c1){   //if the 1st bucket is empty, barrel should fill it
                barrel.pop();
                bucket1.push(1);
            }
        }else if((bucket2.showTop()!=5) && (bucket2.showTop()!=0)){
            int c = bucket2.showTop();
            while(c2-c!=0){              //the difference between capacity and liters inside
                bucket1.pop();          //if the 2nd bucket is nor empty, neither full, complete the difference from the 1st bucket
                bucket2.push(1);
                c++;
            }
        }
        cout<< "State(L1,L2,C1,C2) = State("<<bucket1.showTop()<<","<<bucket2.showTop()<<","<<c1<<","<<c2<<")"<<" -- barrel : "<<barrel.showTop()<<" liters\n";
        // at each step we display the state
    }
    return 0;
}

