#include <iostream>
using namespace std;
class bankAccount{
    private:
        string name;
        string address;
        int sum;
        string IBAN;
    public :
        bankAccount();
        bankAccount(string nm, string ad, int s, string ib);

    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
    int getSum(){
        return sum;
    }
    string getIBAN(){
        return IBAN;
    }
    void deposit(int addedSum);
    void withdraw(int exitSum);
    void displayBalance();
    void displayOwner();

};

bankAccount::bankAccount(){
}
bankAccount::bankAccount(string parName, string parAddress, int parSum, string parIban)
{
    this->name=parName;//re=param_re;
    this->address=parAddress;//im=param_im;
    this->sum=parSum;
    this->IBAN=parIban;
}
void bankAccount::deposit(int addedSum){
    this->sum=sum+addedSum;
}
void bankAccount::withdraw(int exitSum){
    if(exitSum>this->sum){
        cout<<"I'm sorry, but you're account hasn't this deposit sum";
    }else{
    this->sum=sum-exitSum;
    }
}
void bankAccount::displayBalance(){
    cout<<this->sum;
}
void bankAccount::displayOwner(){
    cout<<this->name;
}
int main()
{
    bankAccount ba1("Marcel Ionut", "str. Revolutiei, 45, Bucuresti", 249, "RO999900002873017421");
    bankAccount ba2("Costache Dumitru", "str. Macesului, 21, Constanta", 527, "RO99990033432317421");
    bankAccount ba3("Pavel Cristian", "str. Revolutiei, 45, Bucuresti", 249, "RO99990000392914092");

    ba1.deposit(200);
    ba2.withdraw(600);
    ba3.deposit(150);
    cout<<"\n";

    ba1.displayBalance();
    cout<<"\n";
    ba2.displayBalance();
    cout<<"\n";
    ba3.displayOwner();

    return 0;
}
