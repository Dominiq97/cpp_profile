#include "heap.h"

class Employee{

    string firstName;
    string lastName;
    int bs;//bs=basic salary
    int ts;//total salary
    int exp;//experience

    Employee(string firstName,string lastName,int bs ,int ts,int exp)
{
    this->firstName=firstName;
    this->lastName=lastName;
    this->bs=bs;
    this->ts=ts;
    this->exp=exp;
}
int updateSalary(){
    int bs;
    int ts=bs;
    int i;
    while(1){
        if (2 * i + 1 > h.currentDim) {
                    if (2 * i > h.currentDim);
                    break;}
                    else  if (h.H[2 * i] < h.H[i])
                        {
                            ts=ts+bs/10;
                        }
                        else if (H[2 * i + 1] <= H[2 * i] && H[2 * i + 1] < H[i]){
                            ts=ts +2*(bs/10);
                        }
    }
    return ts;
}

};

    void instruction1(int n){

        cin>>n;//n number of elements
        Heap<int> h1;
        int i=1,j=2,k;
        int z=0;//number of children on a level
        int y=0;//complete levels
                int nr=2;
                int ok=1;
                if(j>currentDim) ok=0;
                if(j==currentDim){
                        ok=0;
                        z++;
                }
                if (z%2==0) y++;
                while(ok==1){
                    i=i*2;
                    for(k=1;k<=i&&j<=currentDim;k++){
                        z++;
                    }
                    if (z%2==0) y++;
                    if(j>currentDim) ok=0;
                    nr++;
                }
                if (y==nr) cout<<"Company is complete";
                    else cout<<"Company is not complete";


    }
    void instruction2(){

        h.extractMin();
        updateSalary();

    }




int main()
{
     Heap< class Employee()> h;
     h.insertElement("Doe","John",1000,10);
    h.insertElement("Doe","John",1000,10);
    h.insertElement("Doe","John",1000,10);
    h.insertElement("Doe","John",1000,10);
    h.insertElement("Doe","John",1000,10);
    h.insertElement("Doe","John",1000,10);
    updateSalary();

    h.displayByLevels();
    instruction1();


};
