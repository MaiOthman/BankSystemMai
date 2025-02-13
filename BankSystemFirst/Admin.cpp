//
//  Admin.cpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#include "Admin.hpp"
#include <iostream>
int Admin::lastAdminId = 0;
Admin::Admin(){
    generateId();
}

Admin::Admin(string name, string password , double salary): Employee(name,password,salary){
    generateId();
}
void Admin::generateId(){
    idAdmin = ++lastAdminId;
}
int Admin::getLastAdminId(){
    return lastAdminId;
}
int Admin::getIdAdmin(){
    return idAdmin;
}
void Admin::displayData(){
    cout << "id = " << idAdmin << endl;
    Person::displayData();
    cout << "Salary: " << Employee::salary << endl;
    cout << "=================================" << endl;
}
void Admin::setIdAdmin(int id){
    idAdmin = id;
}
