#include <iostream>
#include<stdio.h>
#include <string.h>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>

#define MNAME 20

using namespace std;

const int SIZE = 128;
class HashEntry{
public:
    string name;
    long int phone;
        HashEntry(string name, long int phone){
            this->name = name;
            this->phone = phone;
        }
};

class HashTable{
private:
    HashEntry **table;
public:
    HashTable(){
    table = new HashEntry * [SIZE];
    for (int i = 0; i< SIZE; i++){
        table[i] = NULL;
    }
}

    int HashFunc(long int phone){
        return phone % (SIZE+1);
    }

    void Insert(string name, long int phone){
        int hash = HashFunc(phone);
        while (table[hash] != NULL && table[hash]->name != name){
                hash = HashFunc(hash + 1);
            }
            if (table[hash] != NULL)
                delete table[hash];
            table[hash] = new HashEntry(name, phone);
	}

	void updateNumber(long int phone, long int number){
        int hash = HashFunc(phone);
        while(table[hash] != NULL){
            if((table[hash]->phone==phone)){
                break;

            }
            hash = HashFunc(hash+1);
        }
        if (table[hash] == NULL){
            cout<< " No element with this name";
        }else{
            table[hash]->phone == number;
        }
	}

    void Remove(long int phone){
        int hash = HashFunc(phone);
	    while (table[hash] != NULL){
	        if (table[hash]->phone == phone)
	            break;
	        hash = HashFunc(hash + 1);
	    }
            if (table[hash] == NULL){
                cout<<"No Element found at key "<<phone%(SIZE)<<endl;
                return;
            }else{
                delete table[hash];
            }
            cout<<"Element Deleted"<<endl;
        }

        ~HashTable(){
            for (int i = 0; i < SIZE; i++){
                if (table[i] != NULL)
                    delete table[i];
                delete[] table;
            }
        }
};

using namespace std;

struct Login{
    char name[MNAME];
    char password[MNAME];
};

int main(void){

struct Login student[2]={{"Jack97","Panseluta"},{"HookyHooky","barbosu"}};
struct Login query;

cout<<"----- MENU -----\n";
cout<<"- Login -\n";

cout<<"Username : ";
cin>>query.name;
cout<<"Password : ";
cin>>query.password;


for(int i=0;i<2;i++){
    if((strcmp(query.name,student[i].name) == 0) && (strcmp(query.password,student[i].password) == 0)){
        cout<<"Login Successful!\n";
        cout<<" - OPTIONS -\n";
        HashTable hash;
        string name;
        long int phone,number;
        int choice;
        while (1){
            cout<<"1.Insert senoritas in the agenda"<<endl;
            cout<<"2.Update one lady's number"<<endl;
            cout<<"3.Delete a senorita you don't like anymore"<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
                case 1:
                    cout<<"Enter name of the lady pls.: ";
                    cin>>name;
                    cout<<"Enter phone of the baby: ";
                    cin>>phone;
                    hash.Insert(name, phone);
                    break;
                case 2:
                    cout<<"Enter a senorita number you want to change: ";
                    cin>>phone;
                    cout<<"Enter the new number for her: ";
                    cin>>number;
                    hash.updateNumber(phone,number);
                    cout<<"Number succesfully changed\n";
                    break;
                case 3:
                    cout<<"Enter a senorita number you don't like anymore: ";
                    cin>>phone;
                    //Verification!
                        cout<<"Password to confirm: ";
                        cin>>query.password;
                        if(strcmp(query.password,student[i].password) == 0){
                            hash.Remove(phone);
                            break;
                        }else{
                            cout<<"Wrong password!";
                            break;
                        }

                    //Verification!

                case 4:
                    exit(1);
                default:
                    cout<<"\nEnter correct option\n";
                }

    }
    }else{
        cout<<"Wrong Username or password!";
        break;
    }
}
return 0;
}
