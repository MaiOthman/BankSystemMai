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
Client* Employee::searchClient(int id){
    for(Client i: clientVector){
        if(i.getIdClient() == id){
            return &i;
        }
    }
    cout << "Client is not found in this list" << endl;
    return nullptr;
}
void Employee::listClient(){
    for(auto i : clientVector){
        cout << "Id: " << i.getIdClient() << endl;
        cout << "Name: " << i.getName() << endl;
        cout << "Password: " << i.getPassword() << endl;
        cout << "Balance: " << i.getBalance() << endl;
        cout << "=======================================" << endl;
    }
}
void Employee::editClient(int id, string name, string password, double balance){
    Client* searchedClient = nullptr;
    searchedClient = searchClient(id);
    if(searchedClient!=nullptr){
        searchedClient->setIdClient(id);
        searchedClient->setName(name);
        searchedClient->setPassword(password);
        searchedClient->setBalance(balance);
    } else {
        cout << "The searched id is not found." << endl;
    }
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
