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
    Client(): Person(){
        generateId();
    }
    //constructor
    Client(string name, string password, double balance): Person(name, password){
        setBalance(balance);
        generateId();
    }
    //setters
    void setBalance(double balance){
        if(Validator::isBalance(balance)){
            this->balance = balance;
        } else {
            cout << "The balance must be >= 1500" << endl;
        }
    }
    void setIdClient(int id){
        idClient = id;
    }
    //getters
    double getBalance(){
        return balance;
    }
    int getIdClient(){
        return idClient;
    }

    void deposit(double amount){
        if(amount >=0){
            setBalance(balance + amount);
        }
    }
    void withdraw(double amount){
        if(amount >=0){
            setBalance(balance - amount);
        }
    }
    void transferTo(double amount, Client &c2){
        if(amount >=0){
            setBalance(balance - amount);
            c2.setBalance(c2.balance + amount);
        }
    }
    void checkBalance(){
        cout << "Your current balance is: " << balance << endl;
    }
    void displayData(){
        cout << "id: " << idClient << endl;
        Person::displayData();
        checkBalance();
        cout << "=================================" << endl;
    }
    void generateId(){
        idClient = ++lastClientId;
    }
    static int getLastClientId(){
        return lastClientId;
    }
    
};
#endif /* Client_hpp */
