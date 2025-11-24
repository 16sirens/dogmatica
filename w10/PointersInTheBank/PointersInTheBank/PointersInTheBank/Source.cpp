#include "BankAccount.h"


void EditAcount(BankAccount* editAcc) {

    editAcc->SetAccountAmount(100.00);


}


int main()
{

    BankAccount* acc1 = new BankAccount;
    acc1->SetOwnerName("Bob");

    BankAccount acc2;
    acc2.SetOwnerName("Alice");
    acc2.SetAccountAmount(137.00);


    std::cout << "Acc 1: " << acc1->GetOwnerName();
    std::cout << "\nAcc 1: " << acc1->GetAccountAmount();

    std::cout << "\nAcc 2: " << acc2.GetOwnerName();
    std::cout << "\nAcc 2: " << acc2.GetAccountAmount();


    EditAcount(acc1);

    std::cout << "\nAcc 1: " << acc1->GetAccountAmount();
    
    return 0;
}

