#include<iostream>
 using namespace std;
  class loan;
   class Account{
     float balance;
      public:
    void getloan()
    cout<<"enter loan ammount:";
     cin>>loan ammount;
     }
     friend void check eligibility(Account,loan);
    };
     void check eligibility(Account a,loan l){
    if(a.balance>=2*l.loanammout)
    cout<<"eligible for loan"<<endl;
    else
    cout<<"not eligible for loan"<<endl;
    }
    int main(){
     Account acc;
     loan ln;
    acc.getbalance();
     ln.getloan();
    check eligibility(acc,ln);
         return 0;
    }