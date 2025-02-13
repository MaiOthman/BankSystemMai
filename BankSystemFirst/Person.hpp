#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>
#include <string>
#include <iostream>
#include "Validator.hpp"
using namespace std;

class Person{
protected:
    string name;
    string password;
public:
    //constructor
    Person();
    Person(string name, string password);
    //setters
    void setName(string name);
    void setPassword(string password);
    //getters
    string getName();
    string getPassword();
  
    void login(int id, string password);
    void displayData();
    virtual void generateId() = 0;
};

#endif /* Person_hpp */
