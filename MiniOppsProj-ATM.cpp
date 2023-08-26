    #include <bits/stdc++.h>
    using namespace std;

    class ATM
    {
    private:
        /* data */
        int balance;
        int pin;
        long int accNum;
        string mobile_num;
        string name;

    public:
        void setData(int bal=0,int p=0,long int aN=0,
        string name_a="Raghav",string mobNum="NULL"){

            balance = bal;
            pin = p;
            accNum = aN;
            mobile_num = mobNum;
            name = name_a;

        }

        int getBal(){
            return balance;
        }

        long int getAccNum(){
            return accNum;
        }

        int getPin(){
            return pin;
        }

        string getName(){
            return name;
        }

        string getMobNum(){
            return mobile_num;
        }

        bool validatePin(int enteredPin) const {
            return enteredPin == pin;
        }

        bool login() const {
            int enteredPin;
            cout << "Enter your PIN: ";
            cin >> enteredPin;
            if (validatePin(enteredPin)) {
                // Clear the PIN from memory
                memset(&enteredPin, 0, sizeof(enteredPin));
                return true;
            } else {
                // Clear the entered PIN from memory (even though it's incorrect)
                memset(&enteredPin, 0, sizeof(enteredPin));
                return false;
            }
        }

        void getDetails(){
            cout << "****User Details****" << endl;
            cout << "User Account Number: " << getAccNum() << endl;
            cout << "User Name: " << getName() << endl;
            cout << "Mobile Number: " << getMobNum() << endl;
            cout << "Current Balance: " << getBal() << endl;
            
        }

        void updateMobNum(string old_num, string new_num){

            if(old_num==new_num){

                mobile_num=new_num;
                cout<<"Mobile Number has been updated"<<endl;

            } else {
                cout<<"Enter the correct old number"<<endl;
            }
        }

        bool cashWithdraw(int amount_a) {
            if (amount_a > 0 && balance >= amount_a) {
                balance -= amount_a;
                cout << "Please collect the cash" << endl;
                return true;
            } else {
                cout << "Invalid input or Insufficient balance" << endl;
                return false;
            }
        }
    };

    int main(){
        
        int choice=0;
        long int enter_account_num=0;

        system("clear");

        ATM user1;
        user1.setData(1700,1234,1234567,"Raghav","9755101010");

        while(true){  //Login loop

            system("clear");

            cout<<endl<<"***Welcome To ATM***"<<endl;
            cout<<endl<<"Enter your account number: ";
            cin>>enter_account_num;
            cout<<endl;

            if(enter_account_num==user1.getAccNum() && user1.login()){
                while(true){ //Menu loop

                int amount;
                string old_num;
                string new_num;

                system("clear");
                //User Interface
                cout<<"***Welcome To Bank of Pink World***"<<endl;
                cout<<"Select Options"<<endl;
                cout<<"1. Check Balance"<<endl;
                cout<<"2. Cash Withdraw"<<endl;
                cout<<"3. Show User Details"<<endl;
                cout<<"4. Update Mobile No."<<endl;
                cout<<"5. Exit"<<endl;
                cout<<endl;
                cin>>choice;  //Taking choice

                switch (choice)
                {
                case 1:
                    cout<<"Your currently available balance is: " <<user1.getBal()<<endl;
                    break;

                case 2:
                    /* code */
                    cout << "Enter the amount you want to withdraw: ";
                    cin >> amount;
                    if (user1.cashWithdraw(amount)) {
                        cout << "Remaining balance: " << user1.getBal() << endl;
                    } else {
                        cout << "Withdrawal unsuccessful. Please try again." << endl;
                    }
                    break;

                case 3:
                    /* code */
                    user1.getDetails();
                    break;

                case 4:
                    /* code */
                    cout<<"Enter Your Old Mobile No.: ";
                    cin>>old_num;

                    cout<<endl<<"Enter Your New Mobile No.: ";
                    cin>>new_num;

                    user1.updateMobNum(old_num,new_num);
                    cout<<endl;
                    break;

                case 5:
                    /* code */
                    cout<<endl<<"Thank you for using our services";
                    cout<<endl<<"Have Nice Day ;)";
                    return 0;
                    break;
                
                default:
                    cout<<endl<<"Enter a valid option!!!";
                    break;
                }
                
            }
            }else {
                cout << "Invalid account number or PIN. Please try again." << endl;
            }

        }

        
    }