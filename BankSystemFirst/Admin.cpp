

#include "Admin.hpp"
#include <iostream>
#include "global.hpp"

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
void Admin::addEmployee(Employee& employee){
    EmployeeVector.push_back(employee);
}
Employee* Admin::searchEmployee(int id){
    for(auto i: EmployeeVector){
        if(i.getIdEmployee() == id){
            return &i;
        }
    }
    cout << "Employee is not found in this list" << endl;
    return nullptr;
}
void Admin::editEmployee(int id, string name, string password, double salary){
    Employee* searchedEmployee = nullptr;
    searchedEmployee = searchEmployee(id);
    if(searchedEmployee!=nullptr){
        searchedEmployee->setIdEmployee(id);
        searchedEmployee->setName(name);
        searchedEmployee->setPassword(password);
        searchedEmployee->setSalary(salary);
    } else {
        cout << "The searched id is not found." << endl;
    }
}
void Admin::listEmployee(){
    for(auto i : EmployeeVector){
        cout << "Id: " << i.getIdEmployee() << endl;
        cout << "Name: " << i.getName() << endl;
        cout << "Password: " << i.getPassword() << endl;
        cout << "Balance: " << i.getSalary() << endl;
        cout << "=======================================" << endl;
    }
}
