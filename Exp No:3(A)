#include<iostream>
uusing namespace std;
class Loan;
class Account{
    float balance;
    public:
    void getBalance(){
        count<<"Enter account balance:";
        cin>>balance;
    }
    friend void checkEligiblity(Account,Loan);
};
class Loan{
    float loanAmount;
    public:
    void getLoan(){
        cout<<"Enter loan amount:";
        cin>>loanAmount;
    }
    friend void checkEligibility(Account,Loan);
};
void checkEligibility(Account a,Loan l){
    if(a.balance>=2*l.loanAmount)
    count<<"Eigible for loan"<<endl;
else
    count<<"Not eligible for loan"<<endl;
}
int main(){
    Account acc;
    Loan ln;
    acc.getBalance();
    ln.getLoan();
    checkEligibility(acc,ln);
    return o;
}
