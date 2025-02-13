//
//  Person.cpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#include "Person.hpp"
//constructor
Person::Person(){}
Person::Person(string name, string password){
   setName(name);
    setPassword(password);
}
void Person::setName(string name){
    if(!Validator::isValidName(name)){
        cout << "Please enter a valid name. The name must be >= 5 letters and less than or equal 20 letters" << endl;
        return;
    } else {
        this->name = name;
    }
}
void Person::setPassword(string password){
    if(Validator::isValidPassword(password)){
        this->password = password;
    } else {
        cout << "Please enter a valid password. The password must be >= 8 letters and less than or equal 20 letters" << endl;
        return;

    }
}
//getters
string Person::getName(){
    return this->name;
}
string Person::getPassword(){
    return this->password;
}


void Person::login(int id, string password){
    cout << "You loged in successfully" << endl;
}
void Person::displayData(){
    cout << "name: " << name << endl;
}
