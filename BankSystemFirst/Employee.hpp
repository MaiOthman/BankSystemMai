
#ifndef Employee_hpp
#define Employee_hpp
#include <iostream>
#include <stdio.h>
#include "Person.hpp"
#include "Client.hpp"
#include <vector>
#include <string>
using namespace std;

class Employee : public Person {
protected:
    double salary;
    static int lastEmployeeId;
    int idEmployee;
public:
    Employee();
    Employee(string name, string password, double salary);
    void setSalary(double salary);
    void setIdEmployee(int id);
    double getSalary();
    int getIdEmployee();
    static int getLastEmployeeId();
    void AddClient(Client &client);
    Client* searchClient(int id);
    void displayData();
    void generateId();
    void listClient();
    void editClient(int id, string name, string password, double balance);
};
#endif /* Employee_hpp */
