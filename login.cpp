#include <iostream>
#include <string>
using namespace std;

class userName{
    private:
        string name;
    public:
        void setName (string x){
            name = x;
        }
        string getName(){
            return name;
        }
};

class passWord{
    private:
        string password;
    public:
        void setLock (string y){
            password = y;
        }
        string getLock(){
                return password;
        }
};


int main(){
    userName user;
    passWord userp;
    string username, pass;
    cout << "USERNAME: ";
    getline (cin, username);
    cout << "PASSWORD: ";
    getline (cin, pass);

    user.setName (username);
    userp.setLock (pass);

    string loginName, loginLock;
    cout << '\n' << "ENTER USERNAME TO LOGIN: ";
    getline (cin, loginName);
    cout << "ENTER PASSWORD TO LOGIN: ";
    getline (cin, loginLock);


    if (loginName == username && loginLock == pass){
        cout << '\n' << "You successfully logged in, WELCOME!!!" << endl;;
    } else {
        cout << '\n' << "Login attempt failed, TRY AGAIN!!!" << endl;;
    }

    return 0;
}