#include<iostream>
using namespace std;

class BankAccount{
private:
int Account_Num;
int Balance;

public:
BankAccount(int a,int b){
    Account_Num=a;
    Balance=b;
}
void Deposit(int Amount){
    Balance+=Amount;
}
void Withdraw(int Amount){
    if(Amount > Balance){
        cout << "Insufficient funds" << endl;
    }
    else{
    Balance-=Amount;
    }
}

void balance(){
    cout<<"Account no: "<< Account_Num<< endl<< "Balance:"<<Balance<<endl;
}

};

int main(){
    BankAccount b1(102,5000);
    BankAccount b2(203,4000);
    b1.Deposit(3400);
    b2.Withdraw(3400);
    b1.Withdraw(2000);
    b1.balance();
    b2.balance();

    return 0;
}