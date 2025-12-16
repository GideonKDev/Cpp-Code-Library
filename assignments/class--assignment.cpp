/*a bank needs a program for managing customers who open accounts with them.
A customer requires ID number, Name and Opening balance to open an account.
Once the account is open, the customer can check the balance of the account, deposit
 and withdraw some amount from the account.

 create a program using classes*/

 /*program bluePrint
 class: AccountHolder
 data: IdNumber,Name,Balance

 functions
 setName()
 setID()
 getDetails()
 getName()
 getID()
 checkBalance()
 withdraw()
 deposit()
 */

 #include<iostream>
 #include<string>

 using namespace std;
 

 class AccountHolder{
 private:
    int IdNumber, Balance,choice;
    string Name;

public:
    void setName();
    void setID();
    void getDetails();
    void setInitialBalance();
    // string getName(){return Name;}
    // int getID(){return IdNumber;}
    void checkBalance();
    void withdraw();
    void deposit();
    void getChoice();

 };

 void AccountHolder::setName(){
    cout<<"Enter Your First Name only: ";
    cin>>Name;
 }

 void AccountHolder::setID(){
    cout<<"Enter your ID Number: ";
    cin>>IdNumber;
 }

 void AccountHolder::getDetails(){
    cout<<"\n------Account Holders Details are: -------"<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"ID Number: "<<IdNumber<<endl;
    cout<<"Account Balance: "<< Balance<<endl;
 }
 void AccountHolder::setInitialBalance(){
    cout<<"Enter Opening Balance: ";
    cin>>Balance;
 }

 void AccountHolder::checkBalance(){
    if (Balance<=0){
        cout<<"Kindly Deposit Money to activate your Account"<<endl;
        cout<<"Account Balance: "<< Balance<<endl;
    }else{
        cout<<"Account Balance: "<<Balance<<endl;
    }
 }

 void AccountHolder::withdraw(){
    int withdrawn; 
    cout<<"Enter the amount you wish to withdraw: ";
    cin>>withdrawn;

    if (withdrawn>Balance){
        cout<<"You have insufficient Balance.. Kindly top up your account";
    }else{
        Balance = Balance-withdrawn;
        cout<<"You have withdrawn: "<<withdrawn<<endl;
        cout<<"Your new Balance: "<<Balance<<endl;
    }
 }

 void AccountHolder::deposit(){
    int depo; 
    cout<<"Enter the amount you wish to Deposit: ";
    cin>>depo;
    Balance = Balance+depo;
    cout<<"You have deposited: "<<depo<<endl;
    cout<<"Your new Balance: "<<Balance<<endl;
 }

void AccountHolder::getChoice(){
   cout<<"Welcome to your Account Management System"<<endl;
   cout<<"Choose an option from the following menu: "<<endl;      
   cout<<"1. Check Balance"<<endl;
   cout<<"2. Deposit Money"<<endl;
   cout<<"3. Withdraw Money"<<endl;
   cout<<"4. Exit"<<endl;
   cout<<"Enter your choice: ";
   cin>>choice;

   switch(choice){
      case 1:
         checkBalance();
         break;
      case 2:
         deposit();
         break;
      case 3:
         withdraw();
         break;
      case 4:
         cout<<"Thank you for using our services. Goodbye!"<<endl;
         break;

      default:
         cout<<"Invalid choice. Please try again."<<endl;
         getChoice();
         break;
   }
}


 int main(){
    AccountHolder Customer;

      Customer.setName();
      Customer.setID();
      Customer.setInitialBalance();
      Customer.getDetails();
      Customer.getChoice();
      return 0;

 }