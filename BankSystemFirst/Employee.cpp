//
//  Employee.cpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#include "Employee.hpp"
#include "global.hpp"
int Employee::lastEmployeeId = 0;
Employee::Employee(){
    salary = 0;
    generateId();
}
Employee::Employee(string name, string password, double salary): Person(name, password){
    setSalary(salary);
    generateId();
}
void Employee::setSalary(double salary){
    if (salary >=5000){
        this->salary = salary;
    } else {
        cout << "Salary must be > 5000" << endl;
    }
}
void Employee::setIdEmployee(int id){
    idEmployee = id;
}
double Employee::getSalary(){
    return salary;
}
int Employee::getIdEmployee(){
    return idEmployee;
}

void Employee::AddClient(Client &client){
   clientVector.push_back(client);
}
void Employee::searchClient(int id){
    
}
void Employee::displayData(){
    cout << "id = " << idEmployee << endl;
    Person::displayData();
    cout << "Salary: " << salary << endl;
    cout << "=================================" << endl;
}
void Employee::generateId(){
    idEmployee = ++lastEmployeeId;
}
 int Employee::getLastEmployeeId(){
    return lastEmployeeId;
}
