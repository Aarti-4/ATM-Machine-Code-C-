#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bank{
	private:
	string name;
	int accnumber;
	char type[10];
	int amount=0;
	int tot=0;
	public:
		void setvalue(){
			cout<<"Enter name:\n";
			cin.ignore();
			getline(cin, name);
			cout<<"Enter account number:\n";
			cin>>accnumber;
			cout<<"Enter account type:\n";
			cin>>type;
			cout<<"Enter balance:\n";
		    cin>>tot;
		}
		void showdata(){
			cout<<"Name:"<<name <<endl;
			cout<<"Account No.:"<<accnumber <<endl;
			cout<<"Account type:"<<type <<endl;
			cout<<"Balance:"<<tot <<endl;
		}
	    void deposit(){
	    	cout<<"Enter the amount to be deposit:";
	    	cin>>amount;
	   	}
		void showbal(){
			tot=tot+amount;
			cout<<"\n Total balance:"<<tot<<endl;
		} 
		void withdraw(){
			int a,avl_balance;
			cout<<"Enter amount to withdraw:";
		    cin>>a;
		    avl_balance=tot-a;
		    cout<<"Available Balance:"<<avl_balance<<endl;
		}  	
	
};
int main(){
	Bank b;  //b is object of the class.
	int choice;
	 while(1){            //while is the infinite loop;
	 	cout<<"\n~~~~~~~~~~";
	 	cout<<"~~~~~~~~~~~~";
	 	cout<<"~~~WELCOME~~~~~~~~~~~~~~~~";
	 	cout<<"~~~~~~~~~\n\n";
        cout<<"Select your choice from 1 to 6:\n";
		cout<<"\t1. Enter name, Account number, Account type\n";
		cout<<"\t2. Balance inquiry\n";
		cout<<"\t3. Deposit money\n";
		cout<<"\t4. Show total balance\n";
		cout<<"\t5. Withdraw money\n";
		cout<<"\t6. Cancel\n";
		cout<<"Enter choice:";	 
		cin>>choice;	     
	 

switch(choice){      //choices to select from
	case 1:
		b.setvalue();
		break;
	case 2:
		b.showdata();
		break;
	case 3:
	    b.deposit();
		break;
	case 4:
	    b.showbal();
	    break;	
	case 5:
	    b.withdraw();
	    break;
	case 6:
	    exit(1);
		break;
	default :
	cout<<"\nInvalid choice\n"	;
}
}
}


