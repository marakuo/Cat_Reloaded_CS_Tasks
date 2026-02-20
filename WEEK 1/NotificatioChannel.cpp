#include <iostream>
#include <string>
using namespace std;
class INotificationChannel {
public:
    virtual void send(string message) =0 ;
    virtual ~INotificationChannel(){};
};
class Email : public INotificationChannel  {
    void send(string message) override {
        cout<< " Email sent "<<message<<endl;
    };

};

class SMS : public INotificationChannel  {
    void send(string message) override {
        cout<< " SMS sent "<<message<<endl;
    };

};
class User {
public:
    bool useEmail = false;
    bool useSMS = false;
    void choosePreferences() {
        char choice;
        cout<< "do u want to email message (y/n) ?" <<endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            useEmail = true;
        }
        cout<< "do u want to SMS message (y/n) ?" <<endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            useSMS = true;
        }





    }
};


int main() {
    INotificationChannel* channel1 = new Email();
    INotificationChannel* channel2 = new SMS();
    string message1 = "Hello Malk";
    User user;
    user.choosePreferences();
    if (user.useEmail) {
        channel1->send(message1);
    }
    if (user.useSMS) {
        channel2->send(message1);
    }
    if (!user.useEmail && !user.useSMS) {
        cout<<"no notification enabled!"<<endl;
    }




    delete channel1;
    delete channel2;













    return 0;
}
