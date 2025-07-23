#include <iostream>
#include <string>
using namespace std;

int main(){
    int choice;
    string user_pass="Tanmay@123", login_id="Tanmay.Ambudkar", pass, id;
    cout<<"              !!!Welcome User!!!              ";
    cout<<"\n   Hope You Are Having A Great Day :)       ";
    cout<<"\n   Please Select An Option To Continue Further ";
    cout<<"\n   1.Login";
    cout<<"\n   2.Exit";
    cout<<"\n   Option: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout<<"     --------------LOGIN PAGE--------------      ";
            cout<<"\n       Enter Your Credentials:";
            cout<<"\n       Login ID: ";
            cin >> id;
            cout<<"\n       Password: ";
            cin >> pass;
            if(login_id == id){
                if(user_pass == pass){
                    if(pass.length() > 0){
                        cout<<"\n       Succesful Login";
                    } else {
                        cout<<"\n       Error: Password must not be empty.";
                    }
                } else {
                    cout<<"\n       Incorrect Password";
                    cout<<"\n       Try again Later";
                }
            } else {
                cout<<"\nInvalid Username";
            }
            break;

        case 2:
            cout<<"\n       Succesfully Exited";
            break;

        default:
            cout<<"\n       Enter A Valid Option";
            break;
    }
    return 0;
}
