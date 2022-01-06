#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int stiva[100],n,nrsol,k;

void init(int k){
     stiva[k]=0;
}


bool next(int k){
     bool j=false;
     if (stiva[k]<n){
          stiva[k]=stiva[k]+1;
          j = true;
     }
     else{
         j = false;
     }
     return j;
}

bool valid(int k){
    bool c = true;
    for (int i = 1; i<=k-1;i++){
          if (stiva[k]==stiva[i]) {
             c=false;
          }
    }
    return c;
}

bool solutie(int k){
    int sol=false;
     if (k==n){
        sol=true;
     }
    return sol;
}

void print(){
int i=0;
     for(i = 1; i<=n;i++){
         cout << stiva[i];
     }
     cout << endl;
}



int main(){
int k=1;
int n=4;
init(k);
while (k>0){
     while (next(k)==true){
          if  (valid(k)==true){
               if (solutie(k)==true){
                  print();
               }else{
                    k++;
                    init(k);
               }
          }
     }
     k--;
}
return 0;
}
