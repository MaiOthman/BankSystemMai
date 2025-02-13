//

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
    void AddClient(Client &client);
    void searchClient(int id);
    void displayData();
    void generateId();
    static int getLastEmployeeId();
};
#endif /* Employee_hpp */
