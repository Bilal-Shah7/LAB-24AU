#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string filepath = "E:\\ConsoleApplication1\\ConsoleApplication1\\Employe.txt";
    string a;
    fstream emp;
    emp.open(filepath, fstream :: app);
    if (emp.is_open()){
    cout << "Enter the details of new employee i.s Full name, id and Role of the employee"<<endl;
    cin.ignore();
    getline(cin,a);
    emp << a<<endl;
    cout << "Details added successfully"<<endl;
    } else cout << "file not opened"<<endl;
    return 0;

}