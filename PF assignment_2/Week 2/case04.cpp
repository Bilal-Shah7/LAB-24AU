#include <iostream>
#include <cctype>
using namespace std;

bool checkemail(string &email)
{

    bool attherate = false;
    bool dot = false;

    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            attherate = true;
        }
        if (email[i] == '.')
        {
            if (attherate)
                dot = true;
        }
    }
    return attherate && dot;
}

bool checkusername(string &username)
{

    if (username.length() < 3 && username.length() > 15)
    {
        return false;
    }
    for (int i = 0; i < username.length(); i++)
    {

        if (!isalnum(username[i]))
        {
            return false;
        }
    }
    return true;
};

bool checkpassword(string &password)
{

    if (password.length() < 8)
    {
        return false;
    }
    bool letter = false;
    bool digit = false;
    for (int i = 0; i < password.length(); i++)
    {

        if (isalpha(password[i]))
        {
            letter = true;
        }
        if (isdigit(password[i]))
        {
            digit = true;
        }
    }
    return letter && digit;
};

int main()
{
    string email;
    string username;
    string password;

    cout << "Enter your email : ";
    getline(cin, email);
    if (!checkemail(email))
    {
        cout << "Invalid email" << endl;
        return 1;
        ;
    }

    cout << "Enter Username (3-15 characters) : ";
    getline(cin, username);
    if (!checkusername(username))
    {
        cout << "Invalid username" << endl;
        return 1;
    }

    cout << "Enter password : ";
    getline(cin, password);
    if (!checkpassword(password))
    {
        cout << "Invalid password" << endl;
        return 1;
    }

    cout << "Registered Successfully!" << endl;
}