
#include "Client.hpp"
int Client::lastClientId = 0;
Client::Client(): Person(){
    generateId();
}
//constructor
Client::Client(string name, string password, double balance): Person(name, password){
    setBalance(balance);
    generateId();
}
//setters
void Client::setBalance(double balance){
    if(Validator::isBalance(balance)){
        this->balance = balance;
    } else {
        cout << "The balance must be >= 1500" << endl;
    }
}
void Client::setIdClient(int id){
    idClient = id;
}
//getters
double Client::getBalance(){
    return balance;
}
int Client::getIdClient(){
    return idClient;
}

void Client::deposit(double amount){
    if(amount >=0){
        setBalance(balance + amount);
    }
}
void Client::withdraw(double amount){
    if(amount >=0){
        setBalance(balance - amount);
    }
}
void Client::transferTo(double amount, Client &c2){
    if(amount >=0){
        setBalance(balance - amount);
        c2.setBalance(c2.balance + amount);
    }
}
void Client::checkBalance(){
    cout << "Your current balance is: " << balance << endl;
}
void Client::displayData(){
    cout << "id: " << idClient << endl;
    Person::displayData();
    checkBalance();
    cout << "=================================" << endl;
}
void Client::generateId(){
    idClient = ++lastClientId;
}
 int Client::getLastClientId(){
    return lastClientId;
}
