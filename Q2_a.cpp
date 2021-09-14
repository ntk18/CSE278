/*
Nate Elli
*/

#include<iostream>
using namespace std;

int main()
{
    string acc = "21_CSE_c++_Fall";
    string pw = "278A&B";
    bool flag = false;

    do {
        cout << "Please enter the account: ";
        
        string userAcc;
        cin >> userAcc;

        cout << "Please enter the password: ";
        
        string userPw;
        cin >> userPw;

        if (acc.compare(userAcc) == 0 && pw.compare(userPw) == 0) {
            flag = true;
            cout << "Login success." << endl;
        } else {
            cout << "Login failed." << endl;
        }


    } while (!flag);

    return 0;
}