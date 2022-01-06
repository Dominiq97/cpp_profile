#include <stdio.h>
#include <iostream>
using namespace std;
#include "houses.h"         //header

int main(){

    Houses<int> village1;       //a village = a queue of houses

    int noHouses;
    cout <<"Number of houses : ";
    cin>>noHouses;      //number of houses in the circle village

    int copyHouses=noHouses;
    int rh;
    cout << "First house robbed : ";
    cin>>rh; // first house to be robbed

    int nr = 0;
    while(nr<noHouses){
        village1.enqueue(rh);
        rh++;
        if(rh>noHouses){
            rh=1;           //stack in the queue in a circular way the number of the houses starting with the first house to be robbed
        }
        nr++;
    }

    village1.showQueue();       //village before the series of burglary
    cout<<"\n";

        // my Robin Hood is greed and he wants to pair the houses or to burgle them 3 in a row
        // he will not steal from the left house.
    if(noHouses % 2 == 1){          // 2 branches - odd or even no. of houses for obtaining one house in the end
        cout<<"Odd number of houses : \n";
        while(village1.getSize()>1){        //to be just one house in the end
            village1.peekAndDestroy();
            village1.dequeue();
            village1.showQueue();
            cout<<"\n";         //steal from the first and the last house in the queue(village) depending on rh
        }
    }else{
        cout<<"Even number of houses : \n";
        while(village1.getSize()>1){
            if(village1.getSize()!=3){     //if noHouses % 4 == 0 it will remain 3 houses in the end.. so at the end all the houses will be burgled
                village1.peekAndDestroy();
                village1.dequeue();     // in the even case he will still the first house and the last 2
                village1.dequeue();
                village1.showQueue();
                cout<<"\n";
            }else{

                village1.peekAndDestroy();      //for that: in the last level he will burgle only the first and the last house from the queue
                village1.dequeue();
                village1.showQueue();
                cout<<"\n";
            }

        }
    }
    return 0;
}
