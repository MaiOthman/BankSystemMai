#ifndef Client_hpp
#define Client_hpp
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
#include "Validator.hpp"
class Client: public Person{
private:
    double balance;
    static int lastClientId;
    int idClient = lastClientId;
public:
    Client();
    //constructor
    Client(string name, string password, double balance);
    //setters
    void setBalance(double balance);
    void setIdClient(int id);
    //getters
    double getBalance();
    int getIdClient();

    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client &c2);
    void checkBalance();
    void displayData();
    void generateId();
    static int getLastClientId();
};
#endif /* Client_hpp */
