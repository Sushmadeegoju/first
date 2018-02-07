#include<stdlib.h>
#include<iostream>

using namespace std;

class bank
{
   private:
     string name;
     int account_num;
     string type;
     int balance=0;

   public:
     void put_data(string s,int x,string t)
     {
     name=s;
     account_num=x;
     type=t;
     }
     void deposit(int a)
     {
     balance =balance+a;
     cout<<"the balance is:"<<balance<<endl;
     }
     void withdraw()
     {
     int a;
      cout<<"your account balance is:"<<balance<<endl;
      cout<<"enter the amount to be withdrawn";
      cin>>a;
      if(balance>=a)
      {
          balance=balance-a;
          cout<<"present balance is:"<<balance<<endl;
      }
      else
          cout<<"balance is not sufficient"<<endl;
     }
     void display()
     {
     cout<<"name:  "<<name<<endl<<"account_num:  "<<account_num<<endl<<"account_type: "<<type<<endl<<"balance: "<<balance<<endl;
     }
};

main()
{
     bank b;
     string s,type;
     int num,p,bal;
     cout<<"enter the name:";
     cin>>s;
     cout<<"enter the account number:";
     cin>>num;
     cout<<"enter the type:";
     cin>>type;
     b.put_data(s,num,type);
     while(1)
     {
     cout<<"do you want to" <<endl<<"1.deposit"<<endl<<"2.withdraw"<<endl<<"3.check balance"<<endl<<"4.quit"<<endl;
     cin>>p;
     switch(p)
     {
        case 1:
          system("CLS");
          int am;
          cout<<"enter the amount to be deposited:"<<endl;
          cin>>am;
          b.deposit(am);
          break;
        case 2:
          b.withdraw();
          break;
        case 3:
          b.display();
          break;
        case 4:
          return 0;
     }
     }
}


